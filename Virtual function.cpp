#include <iostream>
using namespace std;

class A {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class B : public A {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    B derived1;

    // pointer of Base type that points to derived1
    A* base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    return 0;
}
