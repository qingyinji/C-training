#include "command.h"
#include <iostream>

void Invoker::setCommand(Command *command) {
    command_list.push_back(command);
}

void Invoker::notify() {
    for(auto command : command_list) {
        command->execute();
    }
}

void ConcreteCommand::setReceiver(Receiver *receiver) {
    this->receiver = receiver;
}

void ConcreteCommand::execute() {
    receiver->action();
}

void Receiver::action() {
    std::cout << "receiver"<< std::endl;
}