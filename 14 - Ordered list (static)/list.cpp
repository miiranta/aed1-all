#include <iostream>
#include "list.h"

List::List(){
    count = 0;
}

List::~List(){
    std::cout << "List closed!" << std::endl;
}

bool List::empty(){
    return (count == 0);
}

bool List::full(){
    return (count == MAX);
}

void List::insert(entryType in){  
    int i, j;

    if(full()){
        std::cout << "List is full." << std::endl;
        return;
    }

    //Busca linear-----------------------------------------------------
    i = 1;
    while(i<=count && in>entry[i]){
        i++;
    }
    //-----------------------------------------------------------------

    for(j=count; j>=i; j--){
        entry[j+1] = entry[j];
    }

    entry[i] = in;
    count++;
}

void List::remove(entryType out){  
    int i, p;

    if(empty()){
        std::cout << "List is empty." << std::endl;
        return;
    }

    p = search(out);

    if(p==0){
        std::cout << "Element not found." << std::endl;
        return;
    }

    for(i=p; i<count; i++){
        entry[i] = entry[i+1];
    }

    count--;
}

void List::replace(entryType in, int p){
    if(p<1 || p>count){
        std::cout << "Position out of range." << std::endl;
        return;
    }

    entry[p] = in;
}

void List::retrieve(entryType &out, int p){
    if(p<1 || p>count){
        std::cout << "Position out of range." << std::endl;
        return;
    }

    out = entry[p];
}

void List::clear(){
    count = 0;
}

int List::size(){
    return count;
}

int List::search(entryType in){
    //Busca binária rápida

    int m, L = 1, R = count;

    while(L<R){
        m = (L+R)/2;

        if(entry[m] < in){
            L = m + 1;
        }else{
            R = m;
        }
    }

    return (entry[R] != in ? 0 : R);
}


