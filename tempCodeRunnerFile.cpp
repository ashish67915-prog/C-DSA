#include<iostream>
using namespace std;

template<class T1 , class T2>
class  Student
{
    T1 Reg;
    T2 fees;
    public:
    Student(T1 Reg , T2 fees)
    {
        this->Reg = Reg;
        this->fees = fees;
    }

    void display()
    {
        cout<<"reg number of the student : "<<Reg<<endl;
        cout<<"fees of the student : "<<fees<<endl;
    }
};

int main()
{
    Student<int,float> o1(1,2500.50);
    o1.display();
    return 0;
}

