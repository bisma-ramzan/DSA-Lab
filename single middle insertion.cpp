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

    cout<<"Insertion at Middle : ";
    Node *newNode = new Node;
    newNode->data = 250;

    Node *pre = n1;
    while(pre->next!=n2) 
	{
        pre=pre->next;
    }
    newNode->next=n2;
	pre->next=newNode;
    curr = n1;
    do 
	{
        cout<<curr->data<<" ";
        curr=curr->next;
    } 
	while(curr!=n1);
	
    return 0;
}