//shallow copy constructor -> in this only values are copy because of this both the object pointing to the same address 
//it means when change anything in one it can affect the other

#include<iostream>
using namespace std;

class A 
{
    public:
    int *p;
    A(int x)
    {
        p = new int(x);
    }


    A(A &temp)
    {
        p = temp.p;
    }
    void display();
};

int main()
{
    A o1(10);
    A o2 = o1;
    cout<<*o1.p<<endl;
    cout<<*o2.p<<endl;

    *o2.p = 20;
    cout<<*o1.p<<endl;
    cout<<*o2.p<<endl;
    
    return 0;
}

