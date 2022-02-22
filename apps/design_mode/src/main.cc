#include<iostream>
#include"singleton.h"
#include"observer.h"

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

    return 0;
}