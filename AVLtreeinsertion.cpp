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
    return 0;

    return root->height;
}

int checkBalance(Node *root)
{
  return getHeight(root->left)-getHeight(root->right);
}


Node *rightRotation(Node *root)
{
  Node *child = root->left;
  Node *childRight = child->right;
  child->right = root;
  root->left = childRight;

  //update height
  root->height = 1+max(getHeight(root->left),getHeight(root->right));
  child->height= 1+max(getHeight(child->left),getHeight(child->right));

  return child;


}

Node *leftRotation(Node *root)
{
  Node *child = root->right;
  Node *childLeft  = child->left;
  child->left = root;
  root->right = childLeft;

  //update height
  root->height = 1+max(getHeight(root->left),getHeight(root->right));
  child->height= 1+max(getHeight(child->left),getHeight(child->right));

  return child;

}

Node *insert(Node *root,int value)
{
   if(!root)
   {
     root = new Node(value);
   }

   else if(value<root->data)
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

   //Update height
   root->height = 1+max(getHeight(root->left),getHeight(root->right));

   //check balance
   int balance = checkBalance(root);

   // Left Left
   if(balance>1 && value<root->left->data)
   {
       rightRotation(root);
   }
   //Right Right
   else if(balance<-1 && value>root->right->data)
   {
      leftRotation(root);
   }
   //Left Right
   else if(balance>1 && value>root->left->data)
   {
       leftRotation(root->left);
       rightRotation(root);
   }
   //Right Left
   else if(balance<-1 && value<root->right->data)
   {
       rightRotation(root->right);
       leftRotation(root);
   }
   //Already balance
   else
   {
    return root;
   }
}

void inorder(Node *root)
{
    if(!root)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
int main()
{
   Node *root = NULL;
   root = insert(root,10);
   root = insert(root,20);
   root = insert(root,30);
   root = insert(root,7);
   root = insert(root,15);
   root = insert(root,25);
   root = insert(root,28);

   inorder(root);
}