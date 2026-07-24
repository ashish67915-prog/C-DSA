#include<iostream>
using namespace std;

class test{
    int a = 5;
     
    friend void fun();
};

void fun(){
    test t;
    cout<<t.a<<endl;
}

int main(){
    fun();
    return 0;
}