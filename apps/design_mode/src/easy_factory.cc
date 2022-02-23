#include "easy_factory.h"
#include <iostream>

class EasyFactoryProduce_A : public EasyFactoryProduce
{
public:
    void name_print() override {
        std::cout << "EasyFactoryProduce_A" << std::endl;
    }
};

class EasyFactoryProduce_B : public EasyFactoryProduce
{
public:
    void name_print() override {
        std::cout << "EasyFactoryProduce_B" << std::endl;
    }
};


EasyFactoryProduce* EasyFactory::create(EasyFactoryProdeuceType type) {
    switch (type) {
        case EasyFactoryProdeuceType_A:
            return new EasyFactoryProduce_A();
        case EasyFactoryProdeuceType_B:
            return new EasyFactoryProduce_B();
        default:
            std::cout << "wrong type" << std::endl;
    }
    return nullptr;
}