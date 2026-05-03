#include <iostream>
#include <conio.h>
using namespace std;

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

        cout << "----------------------------------" << endl;
        cout << "----- HOTEL MANAGEMENT SYSTEM ----" << endl;
        cout << "----------------------------------" << endl;

        cout << "1. ADMIN" << endl;
        cout << "2. CUSTOMER" << endl;
        cout << "3. EXIT" << endl;

        int choice;
        cin >> choice;

        // ================= ADMIN =================
        if (choice == 1)
        {
            bool loginSuccess = false;

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
                    loginSuccess = true;
                    cout << "Login successful" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Wrong credentials" << endl;
                    getch();
                }
            }

            if (!loginSuccess)
            {
                cout << "Access denied" << endl;
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

                // VIEW BOOKINGS
                if (op == 1)
                {
                    bool found = false;

                    for (int i = 0; i < index; i++)
                    {
                        if (booked[i])
                        {
                            cout << roomNo[i] << " "
                                 << names[i] << " "
                                 << days[i] << " "
                                 << rent[i] << endl;
                            found = true;
                        }
                    }

                    if (!found)
                        cout << "No bookings found" << endl;

                    getch();
                }

                // SEARCH BOOKING
                else if (op == 2)
                {
                    int r;
                    cout << "Enter room number: ";
                    cin >> r;

                    bool found = false;

                    for (int i = 0; i < index; i++)
                    {
                        if (roomNo[i] == r)
                        {
                            cout << roomNo[i] << " "
                                 << names[i] << " "
                                 << days[i] << " "
                                 << rent[i] << endl;
                            found = true;
                        }
                    }

                    if (!found)
                        cout << "Booking not found" << endl;

                    getch();
                }

                // UPDATE BOOKING
                else if (op == 3)
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

                // DELETE BOOKING
                else if (op == 4)
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

                // TOTAL REVENUE
                else if (op == 5)
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

                else if (op == 6)
                {
                    break;
                }
            }
        }

        // ================= CUSTOMER =================
        else if (choice == 2)
        {
            while (true)
            {
                system("cls");

                cout << "--------------CUSTOMER MENU---------------" << endl;
                cout << "1. BOOK ROOM" << endl;
                cout << "2. VIEW BOOKING" << endl;
                cout << "3. DELETE BOOKING" << endl;
                cout << "4. BACK" << endl;

                int op;
                cin >> op;

                // BOOK ROOM
                if (op == 1)
                {
                    cout << "Enter room number: ";
                    cin >> roomNo[index];

                    cout << "Enter name: ";
                    cin >> names[index];

                    cout << "Enter days: ";
                    cin >> days[index];

                    cout << "Enter rent: ";
                    cin >> rent[index];

                    booked[index] = true;
                    index++;

                    cout << "Booked successfully" << endl;
                    getch();
                }

                // VIEW BOOKING
                else if (op == 2)
                {
                    string n;
                    cout << "Enter name: ";
                    cin >> n;

                    bool found = false;

                    for (int i = 0; i < index; i++)
                    {
                        if (names[i] == n)
                        {
                            cout << roomNo[i] << " "
                                 << days[i] << " "
                                 << rent[i] << endl;
                            found = true;
                        }
                    }

                    if (!found)
                        cout << "No booking found" << endl;

                    getch();
                }

                // DELETE BOOKING
                else if (op == 3)
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