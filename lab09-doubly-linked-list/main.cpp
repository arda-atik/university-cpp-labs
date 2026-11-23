#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List l;

    // Insert elements at the back (0, 1, 2, 3, 4)
    for (int i = 0; i < 5; i++) {
        l.pushBack(i);
    }

    // Insert elements at the front (9, 8, 7, 6, 5)
    for (int i = 5; i < 10; i++) {
        l.pushFront(i);
    }

    cout << "List elements:" << endl;
    l.print();

    cout << "Front element: " << l.front() << endl;
    cout << "Back element: " << l.back() << endl;

    return 0;
}
