//Prática 3 - Algoritmos e Estruturas de dados 1
//Lucas Miranda (12542838)

#include <iostream>
using namespace std;

struct pessoa{
    string nome;
    string endereco;
    string cpf;
    int idade;
};

typedef pessoa entryType;

class Queue{
    public:
        Queue();
        ~Queue();
        void append(entryType in);
        void serve(entryType &out);
        void getFront(entryType &out);
        void getRear(entryType &out);
        void clear(); 
        void print();
        bool empty();
        bool full();
        int size();
    private:
        //Linear nodes
        struct QueueNode;
        typedef QueueNode (*QueuePointer);
        struct QueueNode{
            entryType entry;
            QueuePointer nextNode;
        };

        QueuePointer head, tail;
        int count;
};
