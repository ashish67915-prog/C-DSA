#include<iostream>
using namespace std;

class A
{
    string name;
    int roll_no;
    public:
    int *p;
    A(string name ,int roll_no , int x)
    {
        this->name = name;
        this->roll_no = roll_no;
        p = new int(x);
    }

    A(A &temp)
    {
        name = temp.name;
        roll_no =  temp.roll_no;
        p = new int;
        *p = *(temp.p);
    }
};

int main()
{
    A o1("ashish",03,10);
    A o2 = o1;
    cout<<*o1.p<<endl;
    cout<<*o2.p<<endl;
    *o2.p = 20;
    
    cout<<*o1.p<<endl;
    cout<<*o2.p<<endl;

    return 0;
}