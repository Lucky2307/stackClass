//stackClass.h
#pragma once

#include <iostream>

class stackClass
{
public:
    //stackClass(/* args */);
    //~stackClass();

    char data;
    stackClass *nextNode;

    void push(char _inValue);
    void pushString(std::string _inString);
    bool empty();
    char pop();
    void display();
    int size();
};

// stackClass::stackClass(/* args */)
// {
// }

// stackClass::~stackClass()
// {
// }

