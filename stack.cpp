#include<iostream>
using namespace std;

class Stack {
    private:
        int data[100];
        int top;

    public:
        Stack() {
            top = -1; // Initialize top to -1
        }

        bool isEmpty() {
            return (top == -1);
        }

        int peek() {
            if (isEmpty()) {
                cout << "Stack is empty. Cannot peek." << endl;
                return -1; // Returning -1 if stack is empty
            }
            return data[top];
        }

        void push(int value) {
            if (top >= 99) { // Check for stack overflow
                cout << "Stack overflow. Cannot push more elements." << endl;
                return;
            }
            data[++top] = value;
        }

        void pop() {
            if (isEmpty()) { // Check for stack underflow
                cout << "Stack underflow. Cannot pop elements." << endl;
                return;
            }
            top--;
        }

        void displayElements() {
            if (isEmpty()) {
                cout << "Stack is empty." << endl;
                return;
            }
            for (int i = top; i >= 0; i--) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Stack s;
    int choice;
    while (1) {
        cout << "Menu operations for performing on a stack" << endl;
        cout << "1. Check if stack is empty" << endl;
        cout << "2. Peek" << endl;
        cout << "3. Push" << endl;
        cout << "4. Pop" << endl;
        cout << "5. Display Elements" << endl;
        cout << "6. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                bool result = s.isEmpty();
                cout << "The status of the stack being empty is: " << result << endl;
                break;
            }
            case 2: {
                int result = s.peek();
                if (result != -1) {
                    cout << "Top element currently: " << result << endl;
                }
                break;
            }
            case 3: {
                int element;
                cout << "Enter the element which needs to be added to the stack: ";
                cin >> element;
                s.push(element);
                cout << "Pushed successfully!" << endl;
                break;
            }
            case 4: {
                s.pop();
                cout << "Popped successfully!" << endl;
                break;
            }
            case 5: {
                s.displayElements();
                break;
            }
            case 6: {
                cout << "Sad to see you go!" << endl;
                exit(0);
                break;
            }
            default: {
                cout << "Enter the correct choice please" << endl;
            }
        }
    }
    return 0;
}
