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

//Insertion a starting
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