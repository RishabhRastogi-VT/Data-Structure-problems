// linked list to be reversed without making new node
#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* push(int data,node* head)
{
    
    if(head==NULL)
    {
        node* newnode=new node;
        newnode->data=data;
        head=newnode;
    }
    else
    {
        node* newnode=new node;
        newnode->data=data;
        newnode->next=head;
        head=newnode;
    }
return head;
}
node* print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {        

        cout<<temp->data;
        cout<<"\n";
        temp=temp->next;
    }
    return head;

}


node* reverse(node* head)
{
node* current=head;
node* next1=NULL;
node* prev=NULL;
while(current!=NULL)
{
next1=current->next;
current->next=prev;
prev=current;
current=next1;

}

/*while(prev!=NULL)
{
	cout<<prev->data;
	prev=prev->next;
}*/
 return prev;
}
       



int main()
{
    node* head=NULL;
   head= push(7,head);
    head=push(3,head);
     head=push(8,head);
    head=push(5,head);
    cout<<"original sequence"<<"\n";
    head=print(head);
    cout<<"reverse sequence"<<"\n";
   head=reverse(head);
   
   //cout<<"correct sequence"<<"\n";
   head=print(head);

}