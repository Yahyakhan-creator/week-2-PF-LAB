#include <iostream>
#include <conio.h>
using namespace std;

// ---------- FUNCTIONS ----------

bool adminLogin()
{
    for (int attempt = 0; attempt < 3; attempt++)
    {
        system("cls");
        cout << "Admin Login Attempt " << attempt + 1 << endl;

        string user, pass;
        cout << "Enter username: ";
        cin >> user;
        cout << "Enter password: ";
        cin >> pass;

        if (user == "admin" && pass == "1234")
        {
            cout << "Login successful" << endl;
            getch();
            return true;
        }
        else
        {
            cout << "Wrong credentials" << endl;
            getch();
        }
    }
    return false;
}

void viewBookings(int roomNo[], string names[], int days[], float rent[], bool booked[], int index)
{
    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (booked[i])
        {
            cout << roomNo[i] << " " << names[i] << " "
                 << days[i] << " " << rent[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "No bookings found" << endl;

    getch();
}

void searchBooking(int roomNo[], string names[], int days[], float rent[], int index)
{
    int r;
    cout << "Enter room number: ";
    cin >> r;

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (roomNo[i] == r)
        {
            cout << roomNo[i] << " " << names[i]
                 << " " << days[i] << " " << rent[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Booking not found" << endl;

    getch();
}

void updateBooking(int roomNo[], string names[], int days[], float rent[], bool booked[], int index)
{
    int r;
    cout << "Enter room number: ";
    cin >> r;

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (roomNo[i] == r && booked[i])
        {
            cout << "Enter new name days rent: ";
            cin >> names[i] >> days[i] >> rent[i];
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Booking not found" << endl;

    getch();
}

void deleteBooking(int roomNo[], string names[], int days[], float rent[], bool booked[], int &index)
{
    int r;
    cout << "Enter room number: ";
    cin >> r;

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (roomNo[i] == r)
        {
            for (int j = i; j < index - 1; j++)
            {
                roomNo[j] = roomNo[j + 1];
                names[j] = names[j + 1];
                days[j] = days[j + 1];
                rent[j] = rent[j + 1];
                booked[j] = booked[j + 1];
            }
            index--;
            found = true;
            cout << "Booking deleted" << endl;
            break;
        }
    }

    if (!found)
        cout << "Booking not found" << endl;

    getch();
}

void totalRevenue(int days[], float rent[], bool booked[], int index)
{
    float total = 0;

    for (int i = 0; i < index; i++)
    {
        if (booked[i])
            total += days[i] * rent[i];
    }

    cout << "Total Revenue: " << total << endl;
    getch();
}

// ---------- MAIN ----------
int main()
{
    int index = 3;

    int roomNo[100] = {101, 102, 103};
    string names[100] = {"Ali", "Taha", "Usman"};
    int days[100] = {2, 3, 1};
    float rent[100] = {2000, 2500, 1800};
    bool booked[100] = {true, true, true};

    while (true)
    {
        system("cls");

        cout << "1. ADMIN\n2. CUSTOMER\n3. EXIT\n";
        int choice;
        cin >> choice;

        // ADMIN
        if (choice == 1)
        {
            if (!adminLogin())
            {
                cout << "Access denied" << endl;
                getch();
                continue;
            }

            while (true)
            {
                system("cls");

                cout << "1 VIEW\n2 SEARCH\n3 UPDATE\n4 DELETE\n5 REVENUE\n6 LOGOUT\n";
                int op;
                cin >> op;

                if (op == 1) viewBookings(roomNo, names, days, rent, booked, index);
                else if (op == 2) searchBooking(roomNo, names, days, rent, index);
                else if (op == 3) updateBooking(roomNo, names, days, rent, booked, index);
                else if (op == 4) deleteBooking(roomNo, names, days, rent, booked, index);
                else if (op == 5) totalRevenue(days, rent, booked, index);
                else if (op == 6) break;
            }
        }

        // CUSTOMER
        else if (choice == 2)
        {
            while (true)
            {
                system("cls");

                cout << "1 BOOK\n2 VIEW\n3 DELETE\n4 BACK\n";
                int op;
                cin >> op;

                if (op == 1)
                {
                    cout << "Enter room no name days rent: ";
                    cin >> roomNo[index] >> names[index] >> days[index] >> rent[index];
                    booked[index] = true;
                    index++;
                    getch();
                }
                else if (op == 2)
                {
                    string n;
                    cout << "Enter name: ";
                    cin >> n;

                    for (int i = 0; i < index; i++)
                    {
                        if (names[i] == n)
                            cout << roomNo[i] << " " << days[i] << " " << rent[i] << endl;
                    }
                    getch();
                }
                else if (op == 3)
                {
                    deleteBooking(roomNo, names, days, rent, booked, index);
                }
                else if (op == 4)
                {
                    break;
                }
            }
        }

        else if (choice == 3)
        {
            break;
        }
    }
}