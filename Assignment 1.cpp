#include<iostream>
using namespace std;
int main()
{
    int n1,n2,result;
    char sum;
    cout<<"Enter the First Number : ";
    cin>>n1;
    cout<<"Enter the Second Number : ";
    cin>>n2;
    cout<<"Operation you want to perform (+,-,*,/,%) : ";
    cin>>sum;
    cout<<"Result : ";
    
    if (sum == '+')
    {
        cout<<n1+n2;
    }
    else if (sum == '-')
    {
        cout<<n1-n2;
    }
    else if (sum == '*')
    {       
        cout<<n1*n2;
    }
    else if (sum == '/')
    {
        cout<<n1/n2;
    }
    else if (sum == '%')
    {
        cout<<n1%n2;
    }
    
    
}