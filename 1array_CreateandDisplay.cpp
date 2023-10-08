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

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    createArray(arr, size);
    displayArray(arr, size);

    return 0;
}
