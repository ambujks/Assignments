#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int arr[n];
    cout << "Enter the number of element you want to store in array : ";
    cin >> n;
    cout << "Enter elements in array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}