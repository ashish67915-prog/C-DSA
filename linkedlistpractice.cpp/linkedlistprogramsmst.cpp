//Linked list for mst preparation 

//creating a Node

// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int  main()
// {
//     Node *Head;
//     Head = new Node(4);
//     cout<<Head->data<<endl;
//     cout<<Head->next<<endl;
//     return 0;
// }

//Insertion at starting
// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {
//     Node *Head;
//     Head = NULL;
//     int arr[] = {1,2,3,4,5};
//     for(int i=0;i<5;i++)
//     {
//         if(Head==NULL)
//         {
//             Head = new Node(arr[i]);
//         }
//         else
//         {
//             Node *temp;
//             temp = new Node(arr[i]);
//             temp->next=Head;
//             Head = temp;
//         }
//     }

//     Node *temp = Head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }

//     return 0;
// }


//insertion at the end

// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {
//     Node *Head,*tail;
//     Head = NULL;
//     tail = NULL;
//     int arr[]={1,2,3,4,5};
//     for(int i=0;i<5;i++)
//     {
//         if(Head==NULL)
//         {
//             Head = new Node(arr[i]);
//             tail = Head;
//         }
//         else
//         {
//             tail->next = new Node(arr[i]);
//             tail = tail->next;
//         }
//     }

//     Node *temp;
//     temp = Head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp =  temp->next;
//     }

//     return 0;
// }




//insertion at the end using recursion
// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// Node *CreateLinkedlist(int arr[],int index,int size)
// {
//    if(index==size)
//    {
//     return NULL;
//    }

//    Node *tail;
//    tail = new Node(arr[index]);
//    tail->next = CreateLinkedlist(arr,index+1,size);
//    return tail;
// }

// int main()
// {
//     Node *Head;
//     Head = NULL;
//     int arr[]={1,2,3,4,5};
//     Head = CreateLinkedlist(arr,0,5);
//     Node *temp;
//     temp = Head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

//     return 0;
// }



//insertion at starting using recursion 
// #include<iostream>
// using namespace std;

// class Node 
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// Node *CreateLinkedlist(int arr[],int index,int size,Node *prev)
// {
//    if(index==size)
//    {
//     return prev;
//    }


//    Node *tail;
//    tail = new Node(arr[index]);
//    tail->next = prev;
//    return CreateLinkedlist(arr,index+1,5,tail);
// }

// int main()
// {
//     Node *Head;
//     Head = NULL;
//     int arr[]={1,2,3,4,5};
//     Head = CreateLinkedlist(arr,0,5,Head);
//     Node *temp;
//     temp = Head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }

//     return 0;
// }


//insertion of the nodes at a particular position
// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// Node *CreateLinkedlist(int arr[],int index,int size)
// {
//    if(index==size)
//    {
//     return NULL;
//    }

//    Node *tail;
//    tail = new Node(arr[index]);
//    tail->next = CreateLinkedlist(arr,index+1,size);
//    return tail;
// }

// int main()
// {
//     Node *Head;
//     Head = NULL;
//     int arr[]={1,2,3,4,5};
//     Head = CreateLinkedlist(arr,0,5);

//     Node *temp;
//     temp = Head;
//     int x=3;
//     int num = 20;
//     x--;
//     while(x--)
//     {
//         temp=temp->next;
//     }

//     Node *temp_02 = new Node(num);
//     temp_02->next = temp->next;
//     temp->next = temp_02;

//     temp =  Head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     return 0;
// }


//deletion of the node at starting
// #include<iostream>
// using namespace std;

// class Node 
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// Node *CreateLinkedList(int arr[],int index,int size)
// {
//     if(index==size)
//     {
//         return NULL;
//     }
    
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = CreateLinkedList(arr,index+1,size);
//     return temp;
// }


// int main()
// {
//     Node *Head;
//     Head = NULL;
//     int arr[]={1,2,3,4,5};
//     Head = CreateLinkedList(arr,0,5);

//     if(Head!=NULL)
//     {
//         Node *curr;
//         curr = Head;
//         Head=Head->next;
//         delete curr;
//     }
    
//     Node *teap;
//     teap = Head;
//     while(teap!=NULL)
//     {
//         cout<<teap->data<<" ";
//         teap = teap->next;
//     }
//     return 0;
   
// }



//deletion of the node at end
// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next  = NULL;
//     }
// };

// Node *CreateLinkedList(int arr[],int index,int size)
// {
//     if(index==size)
//     {
//         return NULL;
//     }

//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = CreateLinkedList(arr,index+1,size);
//     return temp;
// }

// int main()
// {
//     Node *Head;
//     Head = NULL;
//     int arr[]={1,2,3,4,5};
//     Head = CreateLinkedList(arr,0,5);
//     //if head exist then we will delete
//     if(Head!=NULL)
//     {
//         //if only one node exist
//         if(Head->next==NULL)
//         {
//             Node *tail;
//             tail = Head;
//             delete tail;
//             Head = NULL;
//         }
//         else
//         {
//            Node *curr = Head;
//            Node *prev = NULL;
//            while(curr->next!=NULL)
//            {
//             prev  = curr;
//             curr = curr->next;
//            }
//             prev->next = curr->next;
//             delete curr;
//         }
//     }

    
//         Node *temp;
//         temp = Head;
//         while(temp!=NULL)
//         {
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }

//         return 0;
// }


//delete node at a particular position
// #include<iostream>
// using namespace std;

// class Node 
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// Node *CreateLinkedList(int arr[],int index,int size)
// {
//     if(index==size)
//     {
//        return NULL;
//     }
    
//     Node *temp;
//     temp = new Node(arr[index]);
//     temp->next = CreateLinkedList(arr,index+1,size);
//     return temp;
// }


// int main()
// {
//     Node *Head;
//     Head = NULL;
//     int arr[]={1,2,3,4,5};
//     Head = CreateLinkedList(arr,0,5);
//     int x = 3;
//     if(x==1)
//     {
//       Node *teap;
//       teap = Head;
//       Head = Head->next;
//       delete teap;
//     }
//     Node *curr = Head;
//     Node *prev = NULL; 
//     x--;
//     while(x--)
//     {
//        prev = curr;
//        curr = curr->next;

//     }

//     prev->next = curr->next;
//     delete curr;

//     Node *prt;
//     prt = Head;
//     while(prt!=NULL)
//     {
//         cout<<prt->data<<" ";
//         prt = prt->next;
//     }

//     return 0;
// }



//reverse a linked list
// #include<iostream>
// #include<vector>
// using namespace std;

// class Node 
// {
//     public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {
//     Node *Head = NULL;
//     Node *tail =NULL;
//     vector<int>arr = {1,2,3,4,5};
//     for(int i=0;i<5;i++)
//     {
//     if(Head==NULL)
//     {
//         Head = new Node(arr[i]);
//         tail = Head;
//     }

//     else
//     {
//         tail->next = new Node(arr[i]);
//         tail = tail->next;
//     }
//     }
    
//     Node *temp = Head;
//     while(temp)
//     {
//         arr.push_back(temp->data);
//         temp = temp->next;
//     }
//     temp = Head;
//     int i = arr.size()-1;
//     while(temp)
//     {
//         temp->data = arr[i];
//         i--;
//         temp = temp->next;
//     }

//     temp = Head;
//     while(temp)
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     return 0;
// }



//doubly linked list

//insertion at start 
// #include<iostream>
// using namespace std;

// class Node 
// {
//     public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// int main()
// {
//     Node *Head = NULL;
//     //linked list does not exist
//     if(Head == NULL)
//     {
//         Head = new Node(5);
//     }
//     //linked list already exist
//     else
//     {
//         Node *temp = new Node(5);
//         temp->next = Head;
//         Head->prev = temp;
//         Head = temp;
//     }

//     Node *trav = Head;
//     while(trav!=NULL)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }
//     return 0;
// }


//Insertion at the end
// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// int main()
// {
//     Node *Head = NULL;

//     if(Head ==NULL)
//     {
//         Head = new Node(10);
//     }
//     else
//     {
//         Node *curr = Head;
//         while(curr->next!=NULL)
//         {
//             curr = curr->next;
//         }

//         Node *temp = new Node(10);
//         curr->next = temp;
//         temp->prev = curr;

//     }

//     Node *trav = Head;
//     while(trav!=NULL)
//     {
//         cout<<trav->data<<" ";
//         trav = trav->next;
//     }
//     return 0;
// }


//create a doubly linked list using an array
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
    Node *Head = NULL ,*tail = NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(Head == NULL)
        {
            Head = new Node(arr[i]);
            tail =  Head;
        }

        else
        {
           Node *temp = new Node(arr[i]);
           tail->next = temp;
           temp->prev = tail;
           tail = temp;
        }
    }

    Node *trav = Head;
    while(trav!=NULL)
    {
        cout<<trav->data<<" ";
        trav = trav->next;
    }

    return 0;
}