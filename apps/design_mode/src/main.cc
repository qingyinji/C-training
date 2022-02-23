#include<iostream>
#include"singleton.h"
#include"observer.h"
#include"easy_factory.h"
#include"adapter.h"

int main(int argc, char **argv)
{
    Observer *observer = new Person();
    Subserver *subserver = new Qq();
    subserver->add(observer);
    subserver->notify("hello world!");
    subserver->remove(observer);
    subserver->notify("hello world!");
    delete observer;
    delete subserver;

    EasyFactory factory;
    EasyFactoryProduce *produce1 = factory.create(EasyFactoryProdeuceType_B);
    EasyFactoryProduce *produce2 = factory.create(EasyFactoryProdeuceType_A);
    produce1->name_print(); delete produce1;
    produce2->name_print(); delete produce2;

    Target *target = new Adapter();
    target->request();

    return 0;
}