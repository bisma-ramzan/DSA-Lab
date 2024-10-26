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
        
    n1->data = 200;
    n1->next = n2; 
    n2->data = 300;
    n2->next = n3;
    n3->data = 400;
    n3->next = n4;
    n4->data = 500;
    n4->next = n1;

    cout<<"Original linked list : ";
    Node *curr = n1;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    } 
	while(curr!=n1);
    cout<<endl;

    cout<<"Insertion at start : ";
    Node *newNode = new Node;
    newNode->data = 100;
    newNode->next = n1;

    Node *last = n1;
    while(last->next!=n1) 
	{
        last=last->next;
    }
    last->next=newNode;

    n1 = newNode;
    curr = n1;
    do 
	{
        cout<<curr->data<<" ";
        curr=curr->next;
    } 
	while(curr!=n1);
	
    return 0;
}