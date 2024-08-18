/*
Write a C++ program that incorporates the concept you’ve learned in recent classes. You may take inspiration from the C++ Bank Management System project covered on Project Day.

Note: Specify any new classes, methods, or features you implement. Use comments to explain the purpose and functionality of your additions.
*/
/*
Write a C++ program that incorporates the concept you’ve learned in recent classes. You may take inspiration from the C++ Bank Management System project covered on Project Day.

Note: Specify any new classes, methods, or features you implement. Use comments to explain the purpose and functionality of your additions.
*/

#include<iostream>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;
public:
    Book(string t, string a, int y) 
    {
        title = t;
        author = a;
        year = y;
    }
    void displayInfo() 
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};
int main() 
{
    Book b("Rich Dad Poor Dad", "Robert Kiyosaki and Sharon Lechter", 1997);
    b.displayInfo();
    return 0;
}
