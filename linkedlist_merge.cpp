// merging 2 linked list in order. 

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


node* merge(node* head1,node* head2)
{	
	node* bekarvariable=NULL;
	
	if(head1->data > head2->data)
{
	bekarvariable=head1;
	head1=head2;
	head2=bekarvariable;
}
	node* lol = head1;
	node* current=NULL;
	node* prev=NULL;
	while(head1!=NULL && head2!=NULL)
	{
		if(head2->data<head1->data)
		{
			current = head2;
			head2 = head2->next;
			prev->next=current;
			current->next=head1;
			head1=current;
		}
		else
		{
			prev=head1;
			head1=head1->next;
		}
	}
	
	if(head1 == NULL)
	{
		prev->next = head2;
	}
	else if(head2 == NULL)
	{
		prev->next = head1;
	}
	
	return lol;
	
}
       



int main()
{
    node* head=NULL;
    node* head2=NULL;
    node* lol=NULL;
  // head= push(6,head);
   // head=push(5,head);
     //head=push(3,head);
    //head=push(15,head);
    //head2= push(8,head2);
   // head2=push(7,head2);
     head2=push(2,head2);
    head2=push(1,head2);
    cout<<"original sequence"<<"\n";
   //head=print(head);
    //head2=print(head2);
    lol=merge(head,head2);
    lol=print(lol);
}