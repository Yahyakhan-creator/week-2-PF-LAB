#include <iostream>
using namespace std;

int main()
{
    string books[100];
    int count = 0;
    int choice;
    string bookName;

    while (choice != 5)
    {
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. Return Books" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (count < 100)
            {
                cout << "Enter book name: ";
                cin >> bookName;
                books[count] = bookName;
                count++;
                cout << "Book added successfully" << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "Books in library:" << endl;
            for (int i = 0; i < count; i++)
            {
                cout << books[i] << endl;
            }
        }
        else if (choice == 3)
        {
            if (count > 0)
            {
                cout << "Borrowed book: " << books[count - 1] << endl;
                count--;
            }
        }
        else if (choice == 4)
        {
            if (count < 100)
            {
                cout << "Enter returned book name: ";
                cin >> bookName;
                books[count] = bookName;
                count++;
                cout << "Book returned successfully" << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "Program ended" << endl;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }

        cout << endl;
    }

    return 0;
}