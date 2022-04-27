#include <iostream>
#include "stack.h"

Stack::Stack(){
    top = NULL;
};

Stack::~Stack(){
    clear();
    std::cout << "\n" << "Stack closed." << "\n";
};

void Stack::push(entryType in){
    StackPointer p = new stackNode;
    
    if(p==NULL){
        std::cout << "Stack is full!" << std::endl;
        return;
    }

    p->entry = in;
    p->nextNode = top;
    top = p;
};

void Stack::pop(entryType &out){
    StackPointer p;

    if(empty()){
        std::cout << "Stack is empty!" << std::endl;
        return;
    }

    out = top->entry;
    p = top;
    top = top->nextNode;
    delete p;
};

bool Stack::empty(){
    return (top == NULL);
};

bool Stack::full(){
    //The sky is the limit (also known as RAM)
    return false;
};

void Stack::clear(){
    entryType x;

    while(!empty()){
        pop(x);
    }
};