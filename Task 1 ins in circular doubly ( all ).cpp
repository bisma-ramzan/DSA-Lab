#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node *next;
    Node *prev;
};

int main() 
{
    Node *n1 = new Node;
    Node *n2 = new Node;
    Node *n3 = new Node;
    Node *n4 = new Node;
    
    n1->data = 200;
    n1->next = n2;
    n1->prev = n4;
    n2->data = 300;
    n2->next = n3;
    n2->prev = n1;
    n3->data = 500;
    n3->next = n4;
    n3->prev = n2;
    n4->data = 600;
    n4->next = n1;
    n4->prev = n3;
    
    Node *head=n1;

    cout<<"Original linked list : ";
    Node *current = n1;
    do 
	{
        cout<<current->data<<" ";
        current=current->next;
    } 
	while(current!=n1);
    cout<<endl;

    cout<<"\nInsertion at start : ";
    Node *start = new Node;
    start->data = 100;
    start->next = n1;
    start->prev = n4;
    n1->prev = start;
    n4->next = start;
    n1 = start;
    Node *temp1 = n1;
    do 
	{
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    } 
	while(temp1!=n1);
    
    cout<<"\nInsertion at Middle : ";
    Node *middle = new Node;
    middle->data = 400;
    middle->next = n3;
    middle->prev = n2;
    n3->prev = middle;
    n2->next = middle;
    Node *temp2 = n1;
    do 
	{
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    } 
	while(temp2!=n1);
    
    cout<<"\nInsertion at end : ";
    Node *end = new Node;
    end->data = 700;
    Node *i=n1;
    while(i->next!=n1)
    {
    	i=i->next;
	}
    end->next = n1;
    end->prev = i;
    n1->prev = end;
    i->next = end;
    Node *temp3 = n1;
    do 
	{
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    } 
	while(temp3!=n1);

    return 0;
}