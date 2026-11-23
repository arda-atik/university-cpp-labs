#include <iostream>
#include "item.h"

using std::cout, std::endl;

Item::Item()
    : prev(nullptr), next(nullptr)
{}

Item::Item(Data d)
    : data(d), prev(nullptr), next(nullptr)
{}

void Item::print() const {
    cout << getData();
}

void Item::printLn() const {
    print();
    cout << endl;
}
