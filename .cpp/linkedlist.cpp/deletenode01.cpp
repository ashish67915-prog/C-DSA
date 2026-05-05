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

Node *CreateLinkedList(int arr[],int index,int size)
{
    if(index == size)
    return NULL;

    Node *temp=new Node(arr[index]);
    temp->next = CreateLinkedList(arr,index+1,size);

    return temp;
    
}



int main()
{
   Node *Head;
   Head = NULL;

   int arr[]={1,2,3,4,5};

   Head = CreateLinkedList(arr,0,5);
   
   //delete a node in a linked list

   if(Head!=NULL)
   {
   Node *temp=Head;
   Head = Head->next;
   delete temp;
   }


   while(Head)
   {
    cout<<Head->data<<" ";
    Head = Head->next;
   }

   return 0;
}