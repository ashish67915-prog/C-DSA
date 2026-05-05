#include<iostream>
#include<queue>
#include<vector>
using namespace std;



class Node
{
    public:
    int data;
    Node *left ,*right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

void display(Node *root);

int main()
{
    int x;
    cout<<"enter root element : ";
    cin>>x;
    Node *root = new Node(x);
    int first , second ;
    queue<Node*>q;
    q.push(root);
    Node *temp;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        cout<<"enter left child of "<<temp->data<<": ";
        cin>>first;
        if(first!=-1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout<<"enter right child of "<<temp->data<<": ";
        cin>>second;
        if(second!=-1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    
   display(root);
   

}

void display(Node *root)
{
    queue<Node *>q;
    q.push(root);
    Node *temp;
    vector<int>ans;
    while(!q.empty())
    {
        int n = q.size();
        ans.push_back(q.front()->data);
        while(n--)
        {
        Node *temp = q.front();
        q.pop(); 
        if(temp->left)
        {
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
        }
       }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }

}