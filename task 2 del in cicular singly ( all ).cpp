#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *next;
};

int main() 
{
    Node *n1 = new Node;
    Node *n2 = new Node;
    Node *n3 = new Node;
    Node *n4 = new Node;
        
    n1->data = 100;
    n1->next = n2; 
    n2->data = 200;
    n2->next = n3;
    n3->data = 300;
    n3->next = n4;
    n4->data = 400;
    n4->next = n1;
    
    Node *head=n1;

    cout<<"Original linked list : ";
    Node *current = n1;
    do{
        cout<<current->data<<" ";
        current=current->next;
    } 
	while(current!=n1);
    cout<<endl;

    cout<<"\nDeletion at start : ";
    Node *start = n1;
    Node *end = n1;
    while(end->next!=n1)
    {
    	end=end->next;
	}
	n1=n1->next;
	end->next=n1;
	delete(start);
	Node *curr1 = n1;
    do 
	{
        cout<<curr1->data<<" ";
        curr1=curr1->next;
    } 
	while(curr1!=n1);
	
	cout<<"\nDeletion at Middle : ";
    int position = 2;
    Node *temp=n1;
    if(position==1)
    {
    	Node *middle=n1;
        end=n1;
        while(end->next!=n1) 
		{
            end = end->next;
        }
        n1=n1->next;
        end->next=n1;
        delete(middle);
	}
	else
	{
		Node *previous=nullptr;
		int count=1;
		while(count<position && temp!=nullptr) 
		{
            previous=temp;
            temp=temp->next;
            count++;
        }
        if(temp!=nullptr) 
	    {
            previous->next = temp->next;
            delete temp;
        }
	}
    Node *curr2 = n1;
    do 
	{
        cout<<curr2->data<<" ";
        curr2=curr2->next;
    } 
	while(curr2!=n1);
	
	cout<<"\nDeletion at end : ";
    Node *end1 = n1;
    Node *end2 = nullptr;
    while(end1->next!=n1) 
	{
		end2=end1;
        end1=end1->next;
    }
    end2->next = n1;
    delete(end1);
	Node *curr3 = n1;
    do 
	{
        cout<<curr3->data<<" ";
        curr1=curr3->next;
    } 
	while(curr3!=n1);
	
    return 0;
}