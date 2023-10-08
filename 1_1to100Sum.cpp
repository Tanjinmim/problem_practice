#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return 1; // Return an error code
    }

    int sum = 0;  // prothome sum = 0 dhore nite hoy
    for (int i = 1; i <= n; i++)
    {
        sum += i;  // ekhane sum tai + hoiche. jodi sub hoito tahole - ,
                    //multiplication hole * , division hole /
    }

    cout << "The sum of integers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
