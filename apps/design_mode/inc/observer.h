#pragma once
#include<list>
#include<string>

class Observer
{
public:
    virtual void update(std::string msg) = 0;
    virtual ~Observer(){};
};

class Subserver
{
public:
    virtual void add(Observer* observer)=0;
    virtual void remove(Observer* observer)=0;
    virtual void notify(std::string msg)=0;
    virtual ~Subserver(){};

protected:
    std::list<Observer*> observer_list;
};

class Qq : public Subserver {
    void add(Observer* observer) override;
    void remove(Observer* observer) override;
    void notify(std::string msg) override;
};

class Person : public Observer {
    void update(std::string msg) override;
};