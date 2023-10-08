#include <iostream>
using namespace std;

void createArray(int arr[], int size)
{
    cout << "Enter " << size << " integer elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(const int arr[], int size)
{
    cout << "Array Elements are :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int &size, int elem, int pos)
{
    if (pos >= 0 && pos <= size)
    {
        for (int i = size; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = elem;
        size++;
        cout << "Element inserted successfully.\n";
    }
    else
    {
        cout << "Invalid position.\n";
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    createArray(arr, size);
    displayArray(arr, size);

    int elem, pos;
    cout << "Enter the element to insert: ";
    cin >> elem;
    cout << "Enter the position to insert at: ";
    cin >> pos;
    insertElement(arr, size, elem, pos);

    displayArray(arr, size);

    return 0;
}
