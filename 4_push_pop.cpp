#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum stack size

int stack[MAX_SIZE];
int top = -1; // Initialize top to -1 to indicate an empty stack

bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top == MAX_SIZE - 1;
}

void push(int element)
{
    if (isFull())
    {
        cout << "Stack Overflow! Cannot push more elements.\n";
    }
    else
    {
        stack[++top] = element;
        cout << "Pushed " << element << " onto the stack.\n";
    }
}

void pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty. Nothing to pop.\n";
    }
    else
    {
        cout << "Popped " << stack[top] << " from the stack.\n";
        top--;
    }
}

int main()
{
    cout << "Stack Operations:\n";
    cout << "1. Push Element\n";
    cout << "2. Pop Element\n";
    cout << "3. Quit\n";

    int choice;
    do
    {
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter the element to push: ";
            cin >> element;
            push(element);
            break;
        case 2:
            pop();
            break;
        case 3:
            cout << "Quitting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
            break;
        }
    } while (choice != 3);

    return 0;
}
