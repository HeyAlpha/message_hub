## message_hub

### create hub

```c++
rpc::message_hub hub;
bool success = hub.create(6666);		// set port 6666
```



### subscribe topic

```c++
void on_message(const std::string& topic, const std::string& message)
{
    std::cout << message << std::endl;
}

rpc::message_hub hub;
bool success = hub.connect("127.0.0.1", 6666);
hub.subscribe("topic.ats.test", on_message);
```



### publish message

```c++
rpc::message_hub hub;
bool success = hub.connect("127.0.0.1", 6666);
hub.publish("hello worrld");
```



### reference
[msghub](https://github.com/di9it/msghub)
[chat_server](https://www.boost.org/doc/libs/1_69_0/doc/html/boost_asio/example/cpp11/chat/chat_server.cpp)
