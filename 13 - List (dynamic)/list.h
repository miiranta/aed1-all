#include <iostream>

typedef int entryType;

class List{
    public:
        List();
        ~List();
        void insert(entryType in, int p);
        void remove(entryType &out, int p);
        void replace(entryType in, int p);
        void retrieve(entryType &out, int p);
        void clear();
        bool empty();
        bool full();
        int size();
        int search(entryType in);
        //Minimum
        //Maximum
        //Copy
        //Reverse
        //Sort
    private:
        struct listNode;
        typedef listNode (*listPointer);
        struct listNode{
            entryType entry;
            listPointer nextNode;
        };

        listPointer head;
        int count;

        void setPosition(int pos, listPointer &current);
};