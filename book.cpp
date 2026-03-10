#include <iostream>
using namespace std;
class Book 
{
private:
    int bookId;
    string title;
    string author;
    double price;
public:
    // Function to take input from user
    void input() 
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin,title);

         cout << "Enter Author Name: ";
        getline(cin,author);

        cout << "Enter Price: ";
        cin >> price;
    }
    // Function to display book details
    void display() 
     {
        cout << "\nBook ID: " << bookId;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout  << "\nPrice: " << price << endl;
    }
};
int main()
{
    Book b[4];
    cout << "enter 4 books\n";
    for(int i=0; i<4; i++)
    {
        cout << "\nbook"<< i+1 << endl;
        b[i].input();
    }
  cout<<" \ndisplay book information\n";
  for(int i=0; i<4; i++)
    {
        cout << "\nbook"<< i+1;
        b[i].display();
    }
}