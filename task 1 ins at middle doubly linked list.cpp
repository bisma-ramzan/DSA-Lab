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

Node* insert_at_middle(Node* head, int newvalue, int position)
{
	Node* temp = head;
	int count=0;
	
	while(temp!=nullptr)
	{
		count++;
		temp=temp->next;
	}
	
	if(position < 1 || position > count )
	{
		cout<<"Can't insert at start or end !!!!!! \n";
		return head;
	}
	
	Node* temp1 = new Node();
	temp1->data = newvalue;
	Node* ptr = head;
	int current_pos = 1;
	
	while ( ptr!=nullptr && current_pos<position-1)
	{
		ptr=ptr->next;
		current_pos++;
	}
	
	temp1->next = ptr->next;
	temp1->pre = ptr;
	
	if( ptr->next!=temp1 )
	{
		ptr->next=temp1;
		return head;
	}	
}

int main()
{
	int newvalue,position;
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
	
	cout<<"Enter Value for the new node you wanna insert at any position : ";
	cin>>newvalue;
	cout<<"Enter Position for the new node : ";
	cin>>position;
	
	head = at_Position(head, newvalue, position );
	
	cout<<"After insertion : ";
	print_data(head);
	
	return 0;
}