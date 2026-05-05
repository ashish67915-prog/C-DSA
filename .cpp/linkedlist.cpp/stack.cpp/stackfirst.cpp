#include<iostream>
using namespace std;

//impliment it with array
class Stack
{
    int *arr;
    int size;
    int top;

    public:
    bool flag;    //for dealing with negative number
    //constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }
      //Push
      void push(int value)
      {
        if(top == size-1)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"pushed "<<value<<" into the Stack\n";
            flag = 0;
        }
      }
      //Pop
      void pop()
      {
        if(top == -1)
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
           cout<<"Popped "<<arr[top]<<" from the stack\n";
           top--;
           if(top == -1)
           flag =1;
          
        }
      }
      //Peak

      int peak()
      {
        if(top == -1 )
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        {
            return arr[top];
        }

      }
      //IsEmpty

      bool Isempty()
      {
        return top == -1;  //when top is -1 then it return true and stack is empty otherwise not empty.
      }
      //IsSize
      int Issize()
      {
        return top+1;
      }


};

int main()
{
    Stack S(5);
    S.push(5);
    S.push(6);
    S.push(8);
    S.pop();
    int value = S.peak();
    if(S.flag == 0)
    cout<<value<<endl;
    cout<<S.Isempty()<<endl;
    cout<<S.Issize()<<endl;
}