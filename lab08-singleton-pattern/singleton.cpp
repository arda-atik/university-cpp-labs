#include <iostream>

using namespace std;

class LazySingleton {
private:
    LazySingleton() {}
    static LazySingleton *instance;

public:
    static LazySingleton* getInstance() {
        if (!instance) {
            instance = new LazySingleton();
        }
        return instance;
    }

    void doSomethingUseful() {
        cout << "I am doing something useful (LazySingleton)." << endl;
    }
};

LazySingleton* LazySingleton::instance = nullptr;

class EagerSingleton {
private:
    EagerSingleton() {}
    static EagerSingleton *instance;

public:
    static EagerSingleton* getInstance() {
        return instance;
    }

    void doSomethingUseful() {
        cout << "I am doing something useful (EagerSingleton)." << endl;
    }
};

EagerSingleton* EagerSingleton::instance = new EagerSingleton();

int main() {
    LazySingleton *lazy1 = LazySingleton::getInstance();
    LazySingleton *lazy2 = LazySingleton::getInstance();
    lazy2->doSomethingUseful();

    EagerSingleton *eager1 = EagerSingleton::getInstance();
    eager1->doSomethingUseful();

    return 0;
}
