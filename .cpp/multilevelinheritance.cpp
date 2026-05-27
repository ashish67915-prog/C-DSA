#include <iostream>
using namespace std;

// Base class
class Grandfather {
public:
    void showGrandfather() {
        cout << "This is Grandfather class" << endl;
    }
};

// Derived class from Grandfather
class Father : public Grandfather {
public:
    void showFather() {
        cout << "This is Father class" << endl;
    }
};

// Derived class from Father
class Son : public Father {
public:
    void showSon() {
        cout << "This is Son class" << endl;
    }
};

int main() {
    Son s;

    // Accessing all inherited functions
    s.showGrandfather();
    s.showFather();
    s.showSon();

    return 0;
}