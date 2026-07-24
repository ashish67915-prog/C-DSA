#include<iostream>
using namespace std;

class A
{
    static int count;
    public:
    A()
    {
        count++;
        cout<<count;
    }
};

int A :: count = 0;
int main()
{
    A o1,o2,o3,o4,o5;
    return 0;
}