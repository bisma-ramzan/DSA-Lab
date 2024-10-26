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
    n3->data = 400;
    n3->next = n4;
    n3->prev = n2;
    n4->data = 500;
    n4->next = n1;
    n4->prev = n3;
    
    Node *head = n1;

    cout<<"Original linked list : ";
    Node *curr = n1;
    do 
	{
        cout<<curr->data<<" ";
        curr=curr->next;
    } 
	while(curr!=n1);
    cout<<endl;
    
	cout<<"\nDeletion at Middle : ";
    int position = 2;
    
    if(position==1)
    {
    	Node *middle=head;
        Node *end = head;
        while(end->next!=head) 
		{
            end = end->next;
        }
        head=head->next;
        end->next=head;
        head->prev=end;
        delete(middle);
	}
	else
	{
		Node *temp=head;
		int count=1;
		
		while(count<position) 
		{
            temp=temp->next;
            count++;
        }
        
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
        
	}
	
    Node *curr2 = n1;
    do 
	{
        cout<<curr2->data<<" ";
        curr2=curr2->next;
    } 
	while(curr2!=n1);
	
	return 0;
}