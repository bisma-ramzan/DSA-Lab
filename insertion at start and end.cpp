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
	
	cout<<"\nInsertion at start : \n";
	
	node *nn = new node;
	nn->data = 100;
	nn->next = head;
	nn->pre = nullptr;
	n1->pre = nn;
	head=nn;
	
	node *temp;
	temp=head;
	
	while( temp!=nullptr )
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	
	cout<<"\nInsertion at end : \n";
	
	node *tem;
	tem=head;
	
	while( tem->next!=nullptr )
	{
		tem=tem->next;
	}
	
	node *nm = new node;
	nm->data = 600;
	nm->next = nullptr;
	nm->pre = tem;
	tem->next = nm;
	
	node *tempp;
	tempp=head;
	
	while( tempp!=nullptr )
	{
		cout<<tempp->data<<endl;
		tempp=tempp->next;
	}
	
	return 0;
}