// Define a Book class with a constructor to initialise its properties (title, author, year), and a method displayInfo.

#include<iostream>
#include<string>
using namespace std;
class Book 
{
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
    Book myBook("1984", "George Orwell", 1949);
    myBook.displayInfo();
    return 0;
}
