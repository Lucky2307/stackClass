#include "stackClass.h"
#include <iostream>


stackClass *topNode = nullptr;

void push(char _inValue){
    stackClass* newNode = new stackClass;
    newNode -> data = _inValue;
    newNode -> stackClass::nextNode = topNode;
    topNode = newNode;
}

//Takes string and turns it into a series of push function to automatically push into stack
void pushString(std::string _inString){
    for (char charInString : _inString){
        push(charInString);
    }
}

//Call to check if stack is empty, returns boolean of stack emptiness status
bool empty(){
    if(topNode == NULL){
        std::cout << "Stack is empty" << std::endl;
        return true;
    } else {
        std::cout << "Stack is not empty" << std::endl;
        return false;
    }
}

//Returns the popped value
char pop(){
    if(topNode != NULL){
        char dataPopped = topNode -> data;
        topNode = topNode -> nextNode;
        return dataPopped;
    } else {
        std::cout << "Stack is empty" << std::endl;
        return '0';
    }
}

//Prints out stack values back to back (without spaces) without popping stack
void display(){
    if(topNode != NULL){
        stackClass* pointer = new stackClass;
        pointer = topNode;
        while (pointer -> nextNode != NULL){
            std::cout << pointer -> data;
            pointer = pointer -> nextNode;
        }
    } else {
        std::cout << "Stack is empty" << std::endl;
    }
}

//Returns size of stack 
int size(){
    if(topNode != NULL){
        struct stackClass* pointer = new struct stackClass;
        pointer = topNode;
        int count = 0;
        while (pointer != NULL){
            count++;
            pointer = pointer -> nextNode;
        }
        return count;
    } else {
        std::cout << "Stack is empty" << std::endl;
        return 0;
    }
}

int main(){
    empty();
    std::string input;
    std::cin >> input;
    pushString(input);
    empty();
    std::cout << size() << std::endl;
    std::cout << pop() << pop() << pop() << pop() << std::endl;
    std::cout << size() << std::endl;
    system("pause");
}