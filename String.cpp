#include <iostream>
using namespace std;

int getLength(char str[])
{
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++; 
    }
    return count; 
}


void reverseString(char str[])
{
    int length = getLength(str); 
    int start = 0;               
    int end = length - 1;        

   
    while (start < end)
    {
        
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        
        start++;
        end--;
    }
}

int main()
{
    char str1[100], str2[100];

    
    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    cout << "First String: " << str1 << endl;

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    cout << "Length of the second string: " << getLength(str2) << endl;

    reverseString(str2);
    cout << "Reversed Second String: " << str2 << endl;

    return 0;
}