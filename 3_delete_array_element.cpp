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

void deleteElement(int arr[], int &size, int pos)
{
    if (pos >= 0 && pos < size)
    {
        for (int i = pos; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element deleted successfully.\n";
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
    cout << endl;

    int elem, pos;

    cout << "Enter the position to delete at: ";
    cin >> pos;

    deleteElement(arr, size, pos);
    displayArray(arr, size);
    cout << endl;

    return 0;
}
