//stackClass.h
// #pragma once

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
    bool isEmpty();
    char pop();
    void display();
    int size();
    char peekTop();
};

// stackClass::stackClass(/* args */)
// {
// }

// stackClass::~stackClass()
// {
// }
