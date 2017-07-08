//Inserting a node and forming a binary tree

#include<iostream>
using namespace std;
struct node
{
    int data;
    node *right;
    node *left;
};
node* Insert(node* root,int data)
{
    if(root==NULL)
    {
        node* newnode=new node();
        newnode->data=data;
        newnode->right=NULL;
        newnode->left=NULL;
        return newnode;
    }
    else if(data>root->data)
    {
        
        root->right=Insert(root->right,data);
    }
    else if(data<root->data)
    {
        root->left=Insert(root->left,data);
    }
}

node* Delete(int data,node* root)
{
    if(root==NULL)
    {
        return root;

    }
    else if(root->data>data)
    root->right=Delete(data,root->right);

    else if(root->data<data)
    root->left=Delete(data,root->left);

    else{

        if(root->right==NULL&&root->left==NULL)
        {
            Delete root;
            root=NULL;
        }
        else if(root->right==NULL)
        {   struct node* temp=root;
           root= root->left;
           Delete temp;
        }

else if(root->left==NULL)
        {   struct node* temp=root;
           root= root->right;
           Delete temp;
        }
else{
    node* minrightterm(int data,node* root)
    
}

        }
    }
}

int main()
{
    node* root=NULL;
    root = Insert(root,15);	
    cout<<root->right;
	root = Insert(root,10);
    cout<<root->left;	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

}