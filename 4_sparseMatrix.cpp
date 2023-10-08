#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int main()
{
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    if (rows <= 0 || cols <= 0 || rows > MAX_ROWS || cols > MAX_COLS)
    {
        cout << "Invalid input. Please enter valid dimensions." << endl;
        return 1; // Return an error code
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Sparse Matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                cout << "(" << i << ", " << j << "): " << matrix[i][j] << endl;
            }
        }
    }

    return 0;
}
