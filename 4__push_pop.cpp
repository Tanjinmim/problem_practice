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

void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        cout << "Stack Elements:\n";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Pushing elements onto the stack:\n";
    push(3);
    push(4);
    push(5);
    push(6);
     display();

    cout << "Popping elements from the stack:\n";
    pop();
    push(7);
    pop();

    // Display the stack
    cout << "Displaying the stack:\n";
    display();

    return 0;
}
