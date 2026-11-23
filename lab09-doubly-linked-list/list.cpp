#include "list.h"
#include <iostream>

List::List() {
    initList();
}

void List::initList() {
    first = new Item();
    last = new Item();
    size = 0;
    first->next = last;
    last->prev = first;
}

void List::pushBack(Data d) {
    Item* tmp = new Item(d);
    last->setData(d);
    last->next = tmp;
    tmp->prev = last;
    last = tmp;
    size++;
}

void List::pushFront(Data d) {
    Item* temp = new Item(d);
    first->setData(d);
    first->prev = temp;
    temp->next = first;
    first = temp;
    size++;
}

void List::print() const {
    for (Item *curr = first->next; curr != last; curr = curr->next) {
        curr->printLn();
    }
}
