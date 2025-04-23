//Q5. BookShop
//A bookshop maintains the inventory of books that are being sold at the shop. The list includes details
//such as author, title, price, publisher and stock position. Whenever a customer wants a book, the
//salesperson inputs the title and author and the system searches the list and displays whether it is
//available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the
//book details and requests for the number of copies required. If the requested copies are available, the
//total cost of the requested copies is displayed; otherwise “Required copies not in stock” is displayed.
//Design a system using a class called books with suitable member functions and constructors. Use new
//operators in constructors to allocate the memory space required.

#include <iostream>
using namespace std;

class Book {
    string author;
    string title;
    float price;
    int stock;

public:
    // Constructor
    Book(string a, string t, float p, int s) {
        author = a;
        title = t;
        price = p;
        stock = s;
    }

    // Check and buy book
    void searchBook(string a, string t, int copies) {
        if (author == a && title == t) {
            cout << "Book is available.\n";
            if (copies <= stock) {
                cout << "Total cost: " << price * copies << endl;
            } else {
                cout << "Required copies not in stock.\n";
            }
        } else {
            cout << "Book not found.\n";
        } 
};

int main() {
    // Create one book
    Book b("hari", "pccoe", 500.0, 5);

    string author, title;
    int copies;

    cout << "Enter book title: ";
    getline(cin, title);

    cout << "Enter author name: ";
    getline(cin, author);

    cout << "Enter number of copies: ";
    cin >> copies;

    b.searchBook(author, title, copies);

    return 0;
}
