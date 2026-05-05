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
   
   //Delete Last Node


   //Condition For Linked List Does  Not Exist

   if(Head!=NULL)
   {

    //Condition For If Only One Linked List Exist

      if(Head->next == NULL)
      {
        Node *temp = Head;
        delete temp;
        Head = NULL;
        

      }

      else
      {
        Node *curr = Head;
        Node *prev = NULL;
        while(curr->next!=NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
       
      }
   }

   while(Head)
   {
    cout<<Head->data<<" ";
    Head = Head->next;
   }

   return 0;
}