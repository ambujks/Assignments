// check vowel or consonant -> take char as user input

#include<iostream>
using namespace std;
int main()
{
    char ap;
    cout<<"Enter the Alphabet : ";
    cin>>ap;

    if (ap == 'a' || ap == 'e' || ap == 'i' || ap == 'o' || ap == 'u' || ap == 'A' || ap == 'E' || ap == 'I' || ap == 'O' || ap == 'U')
    {
        cout<<ap<<" is vowel.";
    }
    else if (ap >= 'a' && ap <= 'z' || ap >= 'A' && ap <= 'Z')
    {
        cout<<ap<<" is consonant.";
    }
    else
    {
        cout<<"Invalid Input.";
    }
    
    return 0;
}

// find the largest number among three numbers

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the 3 Numbers : "<<endl;
    cin>>n1>>n2>>n3;

    if(n1 > n2 && n1 > n3)
    {
        cout<<n1<<" is largest.";
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout<<n2<<" is largest.";
    }
    else if (n3 > n1 && n3 > n2)
    {
        cout<<n3<<" is largest.";
    }
    else
    {
        cout<<"Invalid Input.";
    }
    return 0;
}

// Create a function that will return the sum of 3 numbers

#include<iostream>
using namespace std;
int sumOfThree(int n1, int n2, int n3) 
{
    return n1 + n2 + n3;
}
int main() 
{
    int a = 10, b = 20, c = 30;
    int sum = sumOfThree(a, b, c);
    cout << "The sum of " << a << ", " << b << ", and " << c << " is : " << sum << endl;

    return 0;
}

// create a function which will retrun sqrt/square of a number

#include<iostream>
#include<cmath> 
using namespace std;
double calculate(int number, bool returnSquareRoot) 
{
    if (returnSquareRoot) 
    {
        return sqrt(number);  
    } else 
    {
        return number * number;  
    }
}
int main() {
    int num = 16;
    double resultSqrt = calculate(num, true);
    cout << "The square root of " << num << " is : " << resultSqrt << endl;
    double resultSquare = calculate(num, false);
    cout << "The square of " << num << " is : " << resultSquare << endl;
    return 0;
}
