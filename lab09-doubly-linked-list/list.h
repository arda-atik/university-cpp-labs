#ifndef LIST_H
#define LIST_H

#include "item.h"

class List {
    Item *first;
    Item *last;
    unsigned int size;
    void initList();

public:
    List();
    void pushBack(Data d);
    void pushFront(Data d);

    Data back() const {
        return last->prev->getData();
    }

    Data front() const {
        return first->next->getData();
    }

    void print() const;
};

#endif // LIST_H
