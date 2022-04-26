#include <iostream>
#include "stack.cpp"

using namespace std;

int main(){
    Stack stack;
    entryType in, out;

    in = 2;
    stack.push(in);
    in = 4;
    stack.push(in);
    in = 6;
    stack.push(in);

    stack.pop(out);
    cout << out << endl;
    stack.pop(out);
    cout << out << endl;
    stack.pop(out);
    cout << out << endl;
}

