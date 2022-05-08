#include <iostream>

typedef int entryType;

class OrderedList{
    public:
        OrderedList();
        ~OrderedList();
        void insert(entryType in);
        void remove(entryType in);
        void replace(entryType in, int p); //from from 13 - List (dynamic)
        void retrieve(entryType &out, int p); //from from 13 - List (dynamic)
        void clear();
        bool empty();
        bool full();
        int size();
        int search(entryType in);
        //Search with intertion
    private:
        struct listNode;
        typedef listNode (*listPointer);
        struct listNode{
            entryType entry;
            listPointer nextNode;
        };

        listPointer head, sentinel;
        int count;

        //Replace/Retrieve from from 13 - List (dynamic)
        void setPosition(int p, listPointer &current);
};