
#include <iostream>
#include <vector>
#include <string>
#include <cstdint>
#include <boost/asio/io_context.hpp>
#include "message_hub.hpp"


// Message handler
void on_message(const std::string& topic, const std::string& message)
{
    std::string text(message.begin(), message.end());
    std::cout << text << std::endl;
}

int main()
{
    rpc::message_hub hub;
    hub.connect("localhost", 6666);
    hub.subscribe("topic.ats.test", on_message);
    for (;;);
}
