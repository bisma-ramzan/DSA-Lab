#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
	node *pre;
};

int main()
{
	
	node *n1 = new node;
	node *n2 = new node;
	node *n3 = new node;
	node *n4 = new node;
	
	n1->data = 200;
	n2->data = 300;
	n3->data = 400;
	n4->data = 500;
	
	n1->pre = nullptr;
	n2->pre = n1;
	n3->pre = n2;
	n4->pre = n3;
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = nullptr;
	
	node *head;
	head = n1;
	
	node *curr;
	curr=head;
	while( curr!=nullptr )
	{
		cout<<curr->data<<endl;
		curr=curr->next;
	}
	
	int val;
    cout<<"\nEnter the value you want to delete : ";
    cin>>val;

    node *n=head;
    while( n!=nullptr && n->data!=val ) 
	{
        n=n->next;
    }

    if( n!=nullptr) 
	{    
        if( n->pre!=nullptr)
		{ 
            n->pre->next=n->next; 
        } 
		else 
		{
            head=n->next; 
        }
        
        if( n->next!=nullptr) 
		{
            n->next->pre=n->pre; 
        }
        delete(n); 
    } 
	else 
	{
        cout<<"Node with value "<<val<<" not found.";
    }

    node *j=head;
    cout<<"\nDeletion at middle : \n";
    while(j!=nullptr) 
	{
        cout<<j->data<<" ";
        j=j->next;
    }
    cout<<endl;
    return 0;
}