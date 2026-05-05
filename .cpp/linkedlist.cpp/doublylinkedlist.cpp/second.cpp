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


Node *CreateDLL(int arr[],int index,int size,Node *back)
{
    if(index == size)
    return NULL;
    
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr,index+1,size,temp);

    return temp;
}

int main()
{

    Node *head = NULL;

    int arr[]={1,2,3,4,5};
    head = CreateDLL(arr,0,5,NULL);

    //insert a node at a certain position .
    int pos = 3;
    //insert node at start.
    if(pos == 0)
    {
        //linked list does not exist
        if(head == NULL)
        {
            head = new Node(8);
        }
        //linked list exist
        else
        {
            Node *temp = new Node(8);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        
    }
   

    else
    {
        Node *curr = head;
        //Go to that position where we have to insert the node.
        while(--pos)
        {
            curr = curr->next;
        };

        //insert node at end.
        if(curr->next == NULL)    //Last Node.
        {
           Node *temp = new Node(8);
           temp->prev = curr;
           curr->next = temp;

        }
        //insert node at middle.
        else
        {
            Node *temp = new Node(8);
            temp->prev =curr;
            temp->next = curr->next;
            curr->next = temp;
            temp->next->prev =temp;
        }

    }
    Node *trav = head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}