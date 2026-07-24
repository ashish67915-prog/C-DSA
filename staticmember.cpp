// #include<iostream>
// using  namespace std;

// class Person
// {
//     public:
//     static int count;
//     Person()
//     {
//        count++;
//        cout<<"Number of the student present in a class : "<<count<<endl;
//     }
    
// };

// int Person :: count = 0;

// int main()
// {
//     Person o1,o2,o3,o4,o5;
//     return 0;
// }


#include<iostream>
#include<cstring>
using namespace std;

class Person 
{
    public:
    string name;
    int roll_no;
    static int college_id;
    Person(string name , int roll_no)
    {
       this->name = name;
       this->roll_no = roll_no;
    }
    void show();
    static void print();
};

int Person :: college_id = 104;

void Person :: show()
{
    cout<<"Name of the student : "<<name<<endl;
    cout<<"Roll_no of the student : "<<roll_no<<endl;
}

void Person :: print()
{
    cout<<"college_id of the student : "<<college_id<<endl;
}

int main()
{
    Person o1("Ashish",03);
    o1.show();
    Person :: print();
}