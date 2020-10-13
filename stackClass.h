//stackClass.h
#pragma once

#include <iostream>

class stackClass
{
    private:
        stackClass *topNode = nullptr;

    public:

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