#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void print_data( Node* head)
{
	if( head == nullptr )
	{
		cout<<"Empty Linked List !!!!!!!! ";
		return;
	}
	Node* ptr = head;
	while(ptr!=nullptr)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	
	cout<<endl;
}


Node* at_end(Node* head, int newvalue)
{
    Node* newNode = new Node();
    newNode->data = newvalue; 
    newNode->next = nullptr;
    
    if(head == nullptr)
    {
        return newNode;
    }
    Node* temp = head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main()
{
	int newvalue;
	Node n1,n2,n3,n4;
	
	n1.data=10;
	n1.next=&n2;
	n2.data=20;
	n2.next=&n3;
	n3.data=30;
	n3.next=&n4;
	n4.data=40;
	n4.next=nullptr;
	
	cout<<"Linked List Values are : ";
	Node* head = &n1;
	print_data(head);
	
	cout<<"Enter Value for the new node you wanna insert at end : ";
	cin>>newvalue;
	
	head = at_end(head, newvalue );
	
	cout<<"After insertion : ";
	print_data(head);
	
	return 0;
}