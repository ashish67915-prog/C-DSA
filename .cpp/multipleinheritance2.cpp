#include <iostream>
using namespace std;

// First base class
class Father {
public:
    void showFather() {
        cout << "This is Father class" << endl;
    }
};

// Second base class
class Mother {
public:
    void showMother() {
        cout << "This is Mother class" << endl;
    }
};

// Derived class inheriting from both Father and Mother
class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "This is Child class" << endl;
    }
};

int main() {
    Child c;

    // Accessing functions from both base classes
    c.showFather();
    c.showMother();

    // Accessing child class function
    c.showChild();

    return 0;
}