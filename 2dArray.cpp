#include <iostream>
using namespace std;

// Function to check if an element is present in the array or not
bool isPresent(int arr[][100], int target, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int rows, cols;
    int target;

    // Taking input for the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare a 2D array based on user input
    int arr[100][100]; // Assuming maximum size of 100x100

    // Taking input for the elements of the 2D array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing the 2D array
    cout << "2D Array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // To move to the next line after each row
    }

    // Taking the target element to search in the array
    cout << "Enter the element you want to search: ";
    cin >> target;

    // Checking if the element is present in the array
    if (isPresent(arr, target, rows, cols))
    {
        cout << "Element is found" << endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }

    return 0;
}