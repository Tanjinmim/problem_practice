#include <iostream>
using namespace std;

int findMax(const int arr[], int size)
{
    if (size <= 0) {
        // jodi array te kono value na thake 
        cerr << "Error: Empty array or invalid size.\n";
        return -1; // etar mane array faka
    }

    int maxVal = arr[0]; // prothome dhore niyechi prothom index maximum

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxVal)  // protita value chack korbo
        {
            maxVal = arr[i]; // Update maxVal if a larger element is found
        }
    }

    return maxVal;  // ans ta return korbe.
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter " << size << " integer elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maxElement = findMax(arr, size);   // ekhaneer function ta call hobe
    
    if (maxElement != -1) {            // jodi -1 return na  kore tahole oita maximum
        cout << "The maximum element in the array is: " << maxElement << endl;
    }

    return 0;
}


// Enter the size of the array: 5
// Enter 5 integer elements:
// 2 4 6 8 3
// The maximum element in the array is: 8
