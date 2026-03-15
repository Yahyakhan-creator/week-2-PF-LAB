#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    string book = "";
    string borrowed = "";
    string issued = "";

    while (choice != 5)
    {
        cout << "--- Library System ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter book name: ";
            cin >> book;
            cout << "You added a book: " << book << endl;
        }
        else if (choice == 2)
        {
            cout << "Book in library: " << book << endl;
        }
        else if (choice == 3)
        {
            borrowed = book;
            cout << "You borrowed: " << borrowed << endl;
        }
        else if (choice == 4)
        {
            issued = book;
            cout << "You issued: " << issued << endl;
        }
        else if (choice == 5)
        {
            cout << "Exiting Library System. Goodbye!" << endl;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }

        cout << endl;
    }

    return 0;
}
