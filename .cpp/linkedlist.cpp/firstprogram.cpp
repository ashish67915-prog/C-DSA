//how to create node

#include<iostream>
using namespace std;

class Node
{
public:
 int data;
 Node *next;


 //constructor formation
 Node(int value)
 {
    data=value;
    next=NULL;
 }
 
};


int main()
{
    Node * Head;
    Head = NULL;
    // Head = new Node(4);

    // cout<<Head->data<<endl;
    // cout<<Head->next<<endl;

    int arr[]={1,2,3,4,5};

    //insert node at beginning

    //linked list does not exist 
    for(int i=0;i<5;i++)
    {
    if(Head == NULL)
    {
        Head = new Node(arr[i]);
    }

    //linked list exist
    else
    {
       Node *temp;
       temp = new Node(arr[i]);
       temp->next = Head;
       Head = temp;
    }
    }

    Node *temp = Head;
    while(temp!=NULL)  // or while(temp) both are correct.
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}