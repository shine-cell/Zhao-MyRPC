#pragma once
#include <google/protobuf/service.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>

class myrpcChannel : public google::protobuf::RpcChannel // RpcChannel是在google/protobuf/service.h头文件中定义的
{
public:
    // 所有通过stub代理对象调用的rpc方法都从这里处理，统一做方法调用的数据序列化和网络发送
    // RpcChannel重写CallMethod方法
    void CallMethod(const google::protobuf::MethodDescriptor *method,
                    google::protobuf::RpcController *controller, const google::protobuf::Message *request,
                    google::protobuf::Message *response, google::protobuf::Closure *done);
};