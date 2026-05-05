//create a node using doubly linked list
#include<iostream>
using namespace std;


class Node
{
   public:
   int data;
   Node *next;
   Node *prev;
   
   Node(int value)
   {
    data = value;
    next = NULL;
    prev = NULL;
   }

};
int main()
{
    Node *Head = NULL;

    // insert at start

    //when linked list does not exist
    if(Head == NULL)
    {
        Head = new Node(5);
    }
    //linked list already exist
    else
    {
     Node *temp = new Node(5);
     temp->next = Head;
     Head->prev = temp;
     Head = temp;
    }

    //insert at end

    if(Head == NULL)
    {
       Head = new Node(10);
    }
    else
    {
      Node *curr = Head;
      while(curr->next!=NULL)
      {
        curr = curr->next;

      }
      Node *temp = new Node(10);
      curr->next = temp;
      temp->prev = curr;
    }
     
   
    

    Node *trav = Head;
    while(trav)
    {
        cout<<trav->data;
        trav = trav->next;

    }

    return 0;

}