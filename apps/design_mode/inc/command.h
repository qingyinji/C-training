#pragma once

#include <list>

class Receiver
{
public:
    void action();
};

class Command
{
public:
    virtual void setReceiver(Receiver *receiver) = 0;
    virtual void execute() = 0;
    virtual ~Command() = default;
};

// ConcreteCommand类，绑定一个Receiver，调用其相应操作以实现Excute：
class ConcreteCommand : public Command {
private:
    Receiver* receiver;
public:
    void setReceiver(Receiver* r) override;
    void execute()  override;
};

class Invoker
{
private:
    std::list<Command*> command_list;

public:
    void setCommand(Command *command);
    void notify();
};