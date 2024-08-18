#include<iostream>
using namespace std;
int main() 
{
    int a, b, c;
    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;
    
    *p1 = 10;  
    *p2 = 20;  
    *p3 = 30;  

    int sum = *p1 + *p2 + *p3;
    
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Sum of a, b, and c: " << sum << endl;

    return 0;
}
