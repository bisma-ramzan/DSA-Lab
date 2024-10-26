#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

int main() {

    Node *n1 = new Node;
    Node *n2 = new Node;
    Node *n3 = new Node;
    Node *n4 = new Node;
    
    n1->data = 200;
    n1->prev = nullptr;
    n1->next = n2;
    n2->data = 300;
    n2->prev = n1;
    n2->next = n3;
    n3->data = 400;
    n3->prev = n2;
    n3->next = n4;
    n4->data = 500;
    n4->prev = n3;
    n4->next = nullptr;

    cout<<"Original linked list : ";
    Node *curr = n1;
    while(curr!=nullptr) 
	{
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
    
    cout<<"Insertion at Start : ";
    Node *nn = new Node();
    nn->data = 100;
    nn->next = n1;
    nn->prev = nullptr;
    n1->prev = nn;
    n1 = nn;
    curr = n1;
    while(curr!=nullptr) 
	{
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;

    cout<<"Insertion at end : ";
    Node *nm = new Node();
    nm->data = 600;
    nm->next = nullptr;
    nm->prev = n4;
    n4->next = nm;
    curr = n1;
    while(curr!=nullptr) 
	{
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;

    cout<<"Insertion in middle : ";
    Node *newNode = new Node();
    newNode->data = 250;
    newNode->next = n3;
    newNode->prev = n2;
    n2->next = newNode;
    n3->prev = newNode;
    curr = n1;
    while(curr!=nullptr) 
	{
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;

    return 0;
}