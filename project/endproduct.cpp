#include <iostream>
#include <conio.h>
using namespace std;

// ---------- LOGIN ----------
bool adminLogin()
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");

        cout << "Admin Login Attempt ";
        cout << i + 1 << endl;

        string user, pass;

        cout << "Enter username: ";
        cin >> user;

        cout << "Enter password: ";
        cin >> pass;

        if (user == "admin" && pass == "1234")
        {
            cout << "Login successful";
            getch();
            return true;
        }
        else
        {
            cout << "Wrong credentials";
            getch();
        }
    }

    return false;
}

// ---------- VIEW ----------
void viewBookings(int roomNo[], string names[], int days[], float rent[], bool booked[], int index)
{
    bool found = false;

    cout << "Room   Name   Days   Rent" << endl;

    for (int i = 0; i < index; i++)
    {
        if (booked[i])
        {
            cout << roomNo[i] << " ";
            cout << names[i] << " ";
            cout << days[i] << " ";
            cout << rent[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "No bookings found";

    getch();
}

// ---------- SEARCH ----------
void searchBooking(int roomNo[], string names[], int days[], float rent[], int index)
{
    int r;

    cout << "Enter room number to search: ";
    cin >> r;

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (roomNo[i] == r)
        {
            cout << roomNo[i] << " ";
            cout << names[i] << " ";
            cout << days[i] << " ";
            cout << rent[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Booking not found";

    getch();
}

// ---------- UPDATE ----------
void updateBooking(int roomNo[], string names[], int days[], float rent[], bool booked[], int index)
{
    int r;

    cout << "Enter room number to update: ";
    cin >> r;

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (roomNo[i] == r && booked[i])
        {
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, names[i]);

            cout << "Enter new days: ";
            cin >> days[i];

            cout << "Enter new rent: ";
            cin >> rent[i];

            cout << "Booking updated";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Booking not found";

    getch();
}

// ---------- DELETE (Admin) ----------
void deleteBooking(int roomNo[], string names[], int days[], float rent[], bool booked[], int &index)
{
    int r;

    cout << "Enter room number to delete: ";
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
            cout << "Booking deleted";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Booking not found";

    getch();
}

// ---------- REVENUE ----------
void totalRevenue(int days[], float rent[], bool booked[], int index)
{
    float total = 0;

    for (int i = 0; i < index; i++)
    {
        if (booked[i])
            total += days[i] * rent[i];
    }

    cout << "Total revenue is: ";
    cout << total;

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

        cout << "HOTEL MANAGEMENT SYSTEM" << endl;
        cout << "1. ADMIN" << endl;
        cout << "2. CUSTOMER" << endl;
        cout << "3. EXIT" << endl;

        int choice;
        cin >> choice;

        // ================= ADMIN =================
        if (choice == 1)
        {
            if (!adminLogin())
            {
                cout << "Access denied";
                getch();
                continue;
            }

            while (true)
            {
                system("cls");

                cout << "--------------ADMIN MENU---------------" << endl;
                cout << "1. VIEW BOOKINGS" << endl;
                cout << "2. SEARCH BOOKING" << endl;
                cout << "3. UPDATE BOOKING" << endl;
                cout << "4. DELETE BOOKING" << endl;
                cout << "5. TOTAL REVENUE" << endl;
                cout << "6. LOGOUT" << endl;

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

        // ================= CUSTOMER =================
        else if (choice == 2)
        {
            while (true)
            {
                system("cls");

                cout << "CUSTOMER MENU" << endl;
                cout << "1. BOOK ROOM" << endl;
                cout << "2. VIEW BOOKING" << endl;
                cout << "3. DELETE BOOKING" << endl;
                cout << "4. BACK" << endl;

                int op;
                cin >> op;

                // BOOK
                if (op == 1)
                {
                    if (index >= 100)
                    {
                        cout << "Hotel is full. Cannot book more rooms";
                        getch();
                    }
                    else
                    {
                        int tempRoom;
                        cout << "Enter room number: ";
                        cin >> tempRoom;

                        bool duplicate = false;
                        for (int i = 0; i < index; i++)
                        {
                            if (roomNo[i] == tempRoom && booked[i])
                            {
                                duplicate = true;
                                break;
                            }
                        }

                        if (duplicate)
                        {
                            cout << "Room already booked";
                            getch();
                        }
                        else
                        {
                            roomNo[index] = tempRoom;

                            cout << "Enter name: ";
                            cin.ignore();
                            getline(cin, names[index]);

                            cout << "Enter days: ";
                            cin >> days[index];

                            cout << "Enter rent: ";
                            cin >> rent[index];

                            booked[index] = true;
                            index++;

                            cout << "--- Booking Receipt ---" << endl;
                            cout << "Room: " << roomNo[index - 1] << endl;
                            cout << "Name: " << names[index - 1] << endl;
                            cout << "Days: " << days[index - 1] << endl;
                            cout << "Rent/day: " << rent[index - 1] << endl;
                            cout << "Total: " << days[index - 1] * rent[index - 1] << endl;
                            getch();
                        }
                    }
                }

                // VIEW
                else if (op == 2)
                {
                    string n;

                    cout << "Enter your name: ";
                    cin.ignore();
                    getline(cin, n);

                    bool found = false;

                    for (int i = 0; i < index; i++)
                    {
                        if (names[i] == n)
                        {
                            cout << roomNo[i] << " ";
                            cout << days[i] << " ";
                            cout << rent[i] << endl;
                            found = true;
                        }
                    }

                    if (!found)
                        cout << "No booking found";

                    getch();
                }

                // DELETE (with name verification)
                else if (op == 3)
                {
                    int r;
                    string n;

                    cout << "Enter room number: ";
                    cin >> r;

                    cout << "Enter your name: ";
                    cin.ignore();
                    getline(cin, n);

                    bool found = false;

                    for (int i = 0; i < index; i++)
                    {
                        if (roomNo[i] == r && names[i] == n && booked[i])
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
                            cout << "Booking deleted";
                            found = true;
                            break;
                        }
                    }

                    if (!found)
                        cout << "Booking not found or name does not match";

                    getch();
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
