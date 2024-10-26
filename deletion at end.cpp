#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;
};

void print_data(Node* head) 
{
    if (head == nullptr) 
	{
        cout<<"Empty Linked List !!!!! " << endl;
        return;
    }

    Node* ptr=head;
    while(ptr != nullptr) 
	{
        cout<<ptr->data << " ";
        ptr=ptr->next;
    }
    cout << endl;
}

Node* delete_at_end(Node* head) 
{
    if(head == nullptr) 
	{
		cout<<"List is empty !!! ";
        return nullptr; 
    }

    if(head->next == nullptr) 
	{
        delete head; 
        return nullptr;
    }

    Node* temp = head;
    while(temp->next->next != nullptr) 
	{
        temp=temp->next;
    }
    delete temp->next; 
    temp->next = nullptr;

    return head;
}

int main() 
{
    Node n1, n2, n3, n4;
    n1.data = 10;
    n1.next = &n2;
    n2.data = 20;
    n2.next = &n3;
    n3.data = 30;
    n3.next = &n4;
    n4.data = 40;
    n4.next = nullptr;

    cout << "Linked List Values are: ";
    Node* head = &n1; 
    print_data(head);

    head = delete_at_end(head); 

    cout<<"After deleting : ";
    print_data(head);

    return 0;
}