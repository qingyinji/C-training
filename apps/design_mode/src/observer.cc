/* 
    观察者模式
*/
#include "observer.h"
#include<iostream>

void Qq::add(Observer* observer){
    if(observer!=nullptr)
        observer_list.push_back(observer);
}

void Qq::remove(Observer* observer){
    if(observer!=nullptr)
        observer_list.remove(observer);
}

void Qq::notify(std::string msg) {
    for(auto observer : observer_list)
        observer->update(msg);
}

void Person::update(std::string msg) {
    std::cout << "msg-->" << msg << std::endl;
}