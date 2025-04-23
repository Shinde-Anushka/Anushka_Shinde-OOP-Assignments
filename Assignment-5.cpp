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
