// finding middle element of a linked list.
#include<iostream>
using namespace std;
 

struct node
{
    int data;
    struct node* next;
};
 

void printMiddle(struct node *head)
{
    struct node *slow_ptr = head;
    struct node *fast_ptr = head;
 
    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        cout<<"The middle element is \n";
        cout<<slow_ptr->data;
        cout<<"\n";
    }
}
 
void push(struct node** head_ref, int new_data)
{
  
     node* new_node =new node;
 
   
    new_node->data  = new_data;
 
    
    new_node->next = (*head_ref);
 
   
    (*head_ref)    = new_node;
}
 

void printList(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout<<" the element inserted";
        cout<<"\n";
        cout<<ptr->data<<"\n";
        cout<<"\n";
        ptr = ptr->next;
    }
    
}
 

int main()
{
    
    struct node* head = NULL;
    int i;
 
    for (i=5; i>0; i--)
    {
        push(&head, i);
        printList(head);
        printMiddle(head);
    }
 
    return 0;
}