#include "adapter.h"
#include <iostream>

void Adaptee::SpecificRequest() {
    std::cout << "Adaptee" << std::endl;
}


Adapter::Adapter() {
    adaptee = new Adaptee();
}

Adapter::~Adapter() {
    delete adaptee;
}

void Adapter::request() {
    adaptee->SpecificRequest();
}