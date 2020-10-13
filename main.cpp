#include "stackClass.h"
#include "postfixClass.h"
#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
    // // testing the stack implementation
    // stackClass initialStack;

    // std::cout << initialStack.isEmpty() << std::endl;
    // std::string alphabet = "abcdefghijklmn";
    // initialStack.pushString(alphabet);

    // std::cout << initialStack.isEmpty() << std::endl;
    // std::cout << initialStack.size() << std::endl;
    // initialStack.display();

    // initialStack.push('a');
    // initialStack.push('3');
    // initialStack.push('*');
    // initialStack.display();
    // std::cout << initialStack.size() << std::endl;

    // initialStack.pop();
    // initialStack.pop();
    // initialStack.pop();
    // initialStack.display();
    // std::cout << initialStack.peekTop() << std::endl;
    // initialStack.display();
    // std::cout << initialStack.size() << std::endl;
    // // end testing

    postfixClass postfix;
    std::string exp;
    exp = "(P-Q)*I+J^K";
    std::cout<<"the string expression is:" << exp << std::endl;
    std::cout<<"Output Postfix Expression:"<< postfix.infixToPostfix(exp) << std::endl;

    return 0;
}
