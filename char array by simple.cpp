#include <iostream>
using namespace std;

char stack[5];
int n=5, top=-1;

void push( char x )
{
	if( top==n-1 )
	{
		cout << "Stack overflow. Cannot push more elements." << endl;
    } 
	else 
	{
        top++;
        stack[top] = x;
        cout << " pushed elements : " << x << endl;
        
	}
}

char pop() {
        if (top == -1) {
            cout << "Stack underflow. Cannot pop from an empty stack." << endl;
            return '\0';
        } else {
            cout<<"The popped element is : "<<stack[top]<<endl;
            top--;
        }
    }

    char peek() {
        if (top == -1) {
            cout << "Stack is empty. No top element." << endl;
            return '\0';
        } else {
            cout<<"Top element is : "<<stack[top]<<endl;
        }
    }

    void display() {
        if (top >=0) {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--) {
                cout << stack[i] << " ";
            }
            cout << endl;
        } else {
        	 cout << "Stack is empty." << endl; 
        }
    }


int main() {

    int choice;
    char element;

    do {
        cout << "\nMenu:\n";
        cout << "1. Push element\n";
        cout << "2. Pop element\n";
        cout << "3. Peek top element\n";
        cout << "4. Display stack\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter character to push : ";
                cin >> element;
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}