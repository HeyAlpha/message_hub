
#include <boost/asio.hpp>
#include <string>
#include <vector>
#include <message_hub.hpp>
#include <iostream>

void on_message(const std::string& topic, const std::string& message)
{
    std::cout << message << std::endl;
}

int main()
{
    rpc::message_hub hub;
    hub.create(6666);
    try {
        hub.subscribe("topic.ats.test", on_message);
        hub.publish("topic.ats.test", "new message");
    }
    catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }


    for (;;);
}