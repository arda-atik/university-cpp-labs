#ifndef ITEM_H
#define ITEM_H

typedef int Data;

class Item {
    Data data;
    Item *prev;
    Item *next;

public:
    Item();
    Item(Data d);

    void setData(Data d) {
        data = d;
    }

    Data getData() const {
        return data;
    }

    void print() const;
    void printLn() const;

    friend class List;
};

#endif // ITEM_H
