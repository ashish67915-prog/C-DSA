#include<iostream>
using namespace std;

class Node 
{
    public:
    int data,height;
    Node *left,*right;
    Node(int value)
    {
        data = value;
        height = 1;
        left = right = NULL;
    }
};

int getHeight(Node *root)
{
    if(!root)
    {
        return 0;
    }

    return root->height;
}

Node *insert(Node *root,int value)
{
   if(!root)
   {
    root = new Node(value);
   }

   if(value<root->data)
   {
    root->left = insert(root->left,value);
   }

   else if(value>root->data)
   {
    root->right = insert(root->right,value);
   }

   else
   {
    return root;
   }
}

int main()
{
    Node *root = NULL;
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,7);
    root = insert(root,15);
    root = insert(root,12);
}