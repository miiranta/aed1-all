#include <iostream>

typedef int entryType;

class Stack{
    public:
        Stack();
        ~Stack();
        void push(entryType in);
        void pop(entryType &out);
        bool empty();
        bool full();
        void clear();
    private:
        //Linear nodes
        struct stackNode;
        typedef stackNode (*StackPointer);
        struct stackNode{
            entryType entry;
            StackPointer nextNode;
        };

        StackPointer top;
};
