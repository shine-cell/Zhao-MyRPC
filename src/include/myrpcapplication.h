#pragma once

#include "myrpcconfig.h"
#include "myrpccontroller.h"
#include "myrpcchannel.h"
// myrpc框架的基础类，负责框架的一些初始化操作，使用单例模式设计，包含整个框架的配置信息和日志信息
class myrpcApplication
{
public:
    static void Init(int argc, char **argv);
    static myrpcApplication &GetInstance();
    static myrpcConfig &GetConfig();

private:
    static myrpcConfig m_config;
    myrpcApplication(){};
    myrpcApplication(const myrpcApplication &) = delete;
    myrpcApplication(myrpcApplication &&) = delete;
};