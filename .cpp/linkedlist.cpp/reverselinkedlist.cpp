#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node *next = NULL;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};


int  main()
{
    Node *Head=NULL;
    Node *Tail=NULL;

    vector<int> ans = {1,2,3,4,5};

    
    for(int i=0;i<5;i++)
    {
        if(Head == NULL)
        {
            Head = new Node(ans[i]);
            Tail = Head;
        }
        else
        {
            Tail->next= new Node(ans[i]);
            Tail = Tail->next;
        }
    }

   Node *Temp = Head;
   while(Temp)
   {
     ans.push_back(Temp->data);
     Temp = Temp->next;

   }
   int i = ans.size()-1;
   Temp = Head;
   while(Temp)
   {
      Temp->data = ans[i]; 
      i--;
      Temp = Temp->next;
   }
   
    Temp = Head;
    while(Temp)
    {
        cout<<Temp->data<<" ";
        Temp = Temp->next;
    }
    return 0;

}