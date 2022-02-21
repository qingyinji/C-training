#include "singleton.h"

Singleton& Singleton::get_id(){
    static Singleton id;
    return id;
}