#include<iostream>
#include "stackClass.h"
#include "postfixClass.h"
#include<string>

// This implementation only converts an infix expression of string into a postfix notation
// This implementation does not evaluate the result of the expression
// This implementation only works with single character operand
// We are fully aware that there are countless other implementation with more sophisticated programming technique,
// however, the point of this exercise was to have a better understading of how the stack data structure works.


std::string postfixClass::infixToPostfix(std::string _expression)//Function to perform all conversion operation
{

    stackClass stk;
    std::string postfix = "";
    // Parse the infix expression
    for(int i = 0;i < _expression.length(); i++)
        if(_expression[i] == '(')
        {
            stk.push(_expression[i]);
        }
        else if(_expression[i] == ')')
        {
            while(stk.peekTop() != '(')
            {
                postfix = postfix + stk.peekTop();
                stk.pop();
            }
            stk.pop();
        }
        else if(postfixClass::isOperand(_expression[i]))
        {
            postfix += _expression[i];
        }
        else if(postfixClass::isOperator(_expression[i]))
        {
            while(!stk.isEmpty()&& !postfixClass::higherPrecendence(_expression[i],stk.peekTop()))
            {
                postfix+= stk.peekTop();
                stk.pop();
            }
            stk.push(_expression[i]);
        }
    while(!stk.isEmpty())
    {
        postfix+= stk.peekTop();
        stk.pop();
    }
    return postfix;
}

bool postfixClass::higherPrecendence(char _a, char _b)//Check for operator precendence
{
    int weighta = postfixClass::operatorWeight(_a);
    int weightb = postfixClass::operatorWeight(_b);
    if(weighta >= weightb) return 1;
    return 0;
}

bool postfixClass::isOperator(char _arg)//Check weather the character is operator
{
    if(_arg == '^' || _arg == '*' || _arg == '/' || _arg == '+' || _arg == '-') return(1);
    else return(0);
}
bool postfixClass::isOperand(char _arg)//Check weather the character is operand, only works with single char
{
    if(_arg >= '0' && _arg <= '9') return 1;
    if(_arg >= 'a' && _arg <= 'z') return 1;
    if(_arg >= 'A' && _arg <= 'Z') return 1;
    return 0;
}

int postfixClass::operatorWeight(char _arg)//Add weight to the operator
{
    int weight = 0;
    switch(_arg)
    {
    case '^':
        weight = 3;
        break;
    case '*':
    case '/':
        weight = 2;
        break;
    case '+':
    case '-':
        weight = 1;
        break;
    }
    return(weight);
}