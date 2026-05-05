#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Stack
{
    Node *top;
    int size; // actual size of the stack

    public:
    bool flag;
    Stack()
    {
        top = NULL;
        size = 0;
        flag = 1;
    }
    //push
    void push(int value)
    {
        Node *temp = new Node(value);
        if(temp == NULL)
        {
            cout<<"Stack Overflow\n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;
        cout<<"Pushed "<<value<<" into the stack\n";
        flag = 0;
    }
    //pop
    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
            Node *temp = top;
            cout<<"Popped "<<temp->data<<" from the stack\n";
            top = top->next;
            delete temp;
            size--;
             if(top == NULL)
             flag =1;
          
        }
    }
    //peak
    int peak()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }

    }
    //Isempty
    bool Isempty()
    {
       return top == NULL;
    }

    //Issize
    int Issize()
    {
        return size;
    }
};

int main()
{
    Stack S;
    S.push(2);
    S.push(7);
    S.pop();
    int value = S.peak();
    if(S.flag == 0)
    cout<<value<<endl;

}