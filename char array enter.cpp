#include <iostream>
using namespace std;

class Stack {
private:
    char items[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(char ch) {
        if (top >= 99) {
            cout << "Stack overflow. Cannot push more elements." << endl;
        } else {
            top++;
            items[top] = ch;
            cout << ch << " pushed to stack." << endl;
        }
    }

    char pop() {
        if (top == -1) {
            cout << "Stack underflow. Cannot pop from an empty stack." << endl;
            return '\0';
        } else {
            char poppedItem = items[top];
            top--;
            cout << poppedItem << " popped from stack." << endl;
            return poppedItem;
        }
    }

    char peek() {
        if (top == -1) {
            cout << "Stack is empty. No top element." << endl;
            return '\0';
        } else {
            return items[top];
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << items[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice;
    char ch;
    int n;

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
                cout << "How many characters you want to insert: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Enter character " << i + 1 << ": ";
                    cin >> ch;
                    s.push(ch);
                }
                break;
            case 2:
                s.pop();
                break;
            case 3:
                ch = s.peek();
                if (ch != '\0') {
                    cout << "Top element is: " << ch << endl;
                }
                break;
            case 4:
                s.display();
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