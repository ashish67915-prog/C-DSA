//here we store class member into the set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    int age;
    string name;
    bool operator<(const Person &other) const{
        return age<other.age;
    }
};

int main()
{

    set<Person>s;
    Person P1,P2;
    P1.age = 10  ,P1.name = "ashish";
    P2.age = 20  ,P2.name = "rohit";

    s.insert(P1);
    s.insert(P2);

    for(auto it = s.begin() ;it!=s.end();it++)
    {
        // cout<<(*it).age<<" "<<(*it).name<<endl;
        //or
        cout<<it->age<<" "<<it->name<<endl;
    }
}