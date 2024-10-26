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
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    Node *n4 = new Node();
    
    n1->data = 200;
    n1->next = n2;
    n1->prev = n4;
    n2->data = 300;
    n2->next = n3;
    n2->prev = n1;
    n3->data = 400;
    n3->next = n4;
    n3->prev = n2;
    n4->data = 500;
    n4->next = n1;
    n4->prev = n3;

    cout<<"Original linked list : ";
    Node *curr = n1;
    do 
	{
        cout<<curr->data<<" ";
        curr=curr->next;
    } 
	while(curr!=n1);
    cout<<endl;

    cout<<"Insertion at start : ";
    Node *newNode = new Node();
    newNode->data = 100;
    newNode->next = n1;
    newNode->prev = n4;
    n1->prev = newNode;
    n4->next = newNode;
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