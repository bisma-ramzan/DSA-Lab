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

Node* at_Start(Node* head, int newvalue)
{
	Node* new_node = new Node();
	new_node->data = newvalue;
	new_node->next = head;
	head = new_node;
    return head;	
}

int main()
{
	int newvalue;
	Node n1,n2,n3,n4;
	
	cout<<"Enter value for Node 1 : ";
	cin>>n1.data;
	n1.next=&n2;
	cout<<"Enter value for Node 2 : ";
	cin>>n2.data;
	n2.next=&n3;
	cout<<"Enter value for Node 3 : ";
	cin>>n3.data;
	n3.next=&n4;
	cout<<"Enter value for Node 4 : ";
	cin>>n4.data;
	n4.next=nullptr;
	
	cout<<"Linked List Values are : ";
	Node* head = &n1;
	print_data(head);
	
	cout<<"Enter Value for the new node you wanna insert at start : ";
	cin>>newvalue;
	
	head = at_Start(head , newvalue );
	
	cout<<"After insertion : ";
	print_data(head);
	
	return 0;
}