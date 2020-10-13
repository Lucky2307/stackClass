#pragma once
#include <iostream>
#include <string>

class postfixClass
{
public:
    std::string infixToPostfix(std::string _expression);
    int precendence(char _arg);
    bool isOperand(char _arg);
    bool isOperator(char _arg);
    int operatorWeight(char _arg);
    bool higherPrecendence(char _a, char _b);
};