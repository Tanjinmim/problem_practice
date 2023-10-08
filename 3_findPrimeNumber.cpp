#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false; // 0 and 1 are not prime numbers
    }

    // Check from 2 to the square root of the number
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false; // It has a divisor other than 1 and itself
        }
    }

    return true; // It's a prime number
}

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

// Prime Numbers
// A prime number is the one which has exactly two factors, which means, 
// it can be divided by only “1” and itself. But “1” is not a prime number.
//  3 is a prime number because 3 can be divided by only two number's i.e. 1 and 3 itself.
//   In the same way, 2, 5, 7, 11, 13, 17 are prime numbers.
