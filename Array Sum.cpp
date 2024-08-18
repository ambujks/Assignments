#include <iostream>
#include <limits.h>
using namespace std;
// Function to find the sum of array elements
int arraySum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Function to find the largest element in an array
int largestElement(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ans < arr[i])
        {
            ans = arr[i];
        }
    }
    return ans;
}

// Function to find the second largest element in array
int secondLargestElement(int arr[], int n)
{
    int max = INT_MIN, s_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > s_max && arr[i] != max)
        {
            s_max = arr[i];
        }
    }
    return s_max;
}
int main()
{
    int n;
    cout << "Enter the number of elements you want to store in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Calling sum of array function to calculate sum
    cout << "Sum of array is: " << arraySum(arr, n) << endl;
    // Calling largestElement function to find largest element from given array
    cout << "Largest element in the array is: " << largestElement(arr, n) << endl;
    // Calling secondLargestElement function to get second largest element in the array
    cout << "Second largest element in the array is : " << secondLargestElement(arr, n) << endl;
    return 0;
}