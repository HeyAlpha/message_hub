// client.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <boost/asio/io_context.hpp>
#include <message_hub.hpp>

int main()
{
    rpc::message_hub hub;
    bool ret = hub.connect("localhost", 6666);
    assert(ret);
    int i = 0;
    for (int i = 0; i < 10000; ++i)
        hub.publish("topic.ats.test", "new message " + std::to_string(i));

    for (;;);
}
