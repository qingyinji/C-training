#pragma once

class Target
{
public:
    virtual void request()=0;
    virtual ~Target()=default;
};

class Adaptee
{
public:
    void SpecificRequest();
};

class Adapter :public Target
{
public:
    Adapter();
    void request() override;
    ~Adapter();

private:
    Adaptee *adaptee;
};