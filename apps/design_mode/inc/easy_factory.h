#pragma once
#include <string>

enum EasyFactoryProdeuceType{
    EasyFactoryProdeuceType_A,
    EasyFactoryProdeuceType_B
};

class EasyFactoryProduce
{
public:
    virtual void name_print()=0;
    ~EasyFactoryProduce(){};
};

class EasyFactory
{
public:
    EasyFactoryProduce* create(EasyFactoryProdeuceType type);
};
