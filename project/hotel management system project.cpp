#include <iostream>
using namespace std;

int main()
{
    int index = 3;
    int total_rooms = 100;

    int roomNo[total_rooms] = {101, 102, 103};
    string names[total_rooms] = {"Ali", "Taha", "Usman"};
    int days[total_rooms] = {2, 3, 1};
    float rent[total_rooms] = {2000, 2500, 1800};
    bool booked[total_rooms] = {true, true, true};

    while (true)
    {
        cout << "----------------------------------" << endl;
        cout << "------ HOTEL MANAGEMENT SYSTEM ----" << endl;
        cout << "----------------------------------" << endl;

        cout << "1. ADMIN" << endl;
        cout << "2. CUSTOMER" << endl;
        cout << "3. EXIT" << endl;

        int choice;
        cin >> choice;

        // ================= ADMIN =================
        if (choice == 1)
        {
            string user, pass;
            cin >> user;
            cin >> pass;

            if (user == "admin" && pass == "1234")
            {
                while (true)
                {
                    cout << "\n1. VIEW ALL BOOKINGS" << endl;
                    cout << "2. SEARCH BOOKING" << endl;
                    cout << "3. UPDATE BOOKING" << endl;
                    cout << "4. DELETE BOOKING" << endl;
                    cout << "5. TOTAL REVENUE" << endl;
                    cout << "6. LOGOUT" << endl;

                    int op;
                    cin >> op;

                    // ===== VIEW =====
                    if (op == 1)
                    {
                        cout << "Room\tName\tDays\tRent" << endl;

                        for (int i = 0; i < index; i++)
                        {
                            if (booked[i] == true)
                            {
                                cout << roomNo[i] << "\t" << names[i] << "\t"
                                     << days[i] << "\t" << rent[i] << endl;
                            }
                        }
                    }

                    // ===== SEARCH =====
                    else if (op == 2)
                    {
                        int r;
                        cin >> r;

                        bool found = false;
                        int foundindex = -1;

                        for (int i = 0; i < index; i++)
                        {
                            if (roomNo[i] == r && booked[i] == true)
                            {
                                found = true;
                                foundindex = i;
                            }
                        }

                        if (found == false)
                        {
                            cout << "Booking not found" << endl;
                        }
                        else
                        {
                            cout << roomNo[foundindex] << "\t" << names[foundindex]
                                 << "\t" << days[foundindex] << "\t"
                                 << rent[foundindex] << endl;
                        }
                    }

                    // ===== UPDATE =====
                    else if (op == 3)
                    {
                        int r;
                        cin >> r;

                        bool found = false;
                        int foundindex = -1;

                        for (int i = 0; i < index; i++)
                        {
                            if (roomNo[i] == r && booked[i] == true)
                            {
                                found = true;
                                foundindex = i;
                            }
                        }

                        if (found == true)
                        {
                            string name;
                            int d;
                            float rnt;

                            cin >> name >> d >> rnt;

                            names[foundindex] = name;
                            days[foundindex] = d;
                            rent[foundindex] = rnt;
                        }
                        else
                        {
                            cout << "Booking not found" << endl;
                        }
                    }

                    // ===== DELETE =====
                    else if (op == 4)
                    {
                        int r;
                        cin >> r;

                        bool found = false;
                        int foundindex = -1;

                        for (int i = 0; i < index; i++)
                        {
                            if (roomNo[i] == r && booked[i] == true)
                            {
                                found = true;
                                foundindex = i;
                            }
                        }

                        if (found == true)
                        {
                            booked[foundindex] = false;
                            cout << "Booking deleted" << endl;
                        }
                        else
                        {
                            cout << "Booking not found" << endl;
                        }
                    }

                    // ===== TOTAL REVENUE =====
                    else if (op == 5)
                    {
                        float total = 0;

                        for (int i = 0; i < index; i++)
                        {
                            if (booked[i] == true)
                            {
                                total = total + (days[i] * rent[i]);
                            }
                        }

                        cout << "Total Revenue: " << total << endl;
                    }

                    else if (op == 6)
                    {
                        break;
                    }
                }
            }
        }

        // ================= CUSTOMER =================
        else if (choice == 2)
        {
            cout << "1. BOOK ROOM" << endl;
            cout << "2. VIEW BOOKING" << endl;
            cout << "3. DELETE BOOKING"<<endl;
            

            int op;
            cin >> op;

            // ===== BOOK =====
            if (op == 1)
            {
                int r;
                string name;
                int d;
                float rnt;

                cin >> r >> name >> d >> rnt;

                roomNo[index] = r;
                names[index] = name;
                days[index] = d;
                rent[index] = rnt;
                booked[index] = true;

                index++;
            }

            // ===== VIEW OWN =====
            else if (op == 2)
            {
                string name;
                cin >> name;

                bool found = false;

                for (int i = 0; i < index; i++)
                {
                    if (names[i] == name && booked[i] == true)
                    {
                        cout << roomNo[i] << "\t" << days[i]
                             << "\t" << rent[i] << endl;
                        found = true;
                    }
                }

                if (found == false)
                {
                    cout << "No booking found" << endl;
                }
            }
        }
        else if (op == 3)
                    {
                        int r;
                        cin >> r;

                        bool found = false;
                        int foundindex = -1;

                        for (int i = 0; i < index; i++)
                        {
                            if (roomNo[i] == r && booked[i] == true)
                            {
                                found = true;
                                foundindex = i;
                            }
                        }

                        if (found == true)
                        {
                            booked[foundindex] = false;
                            cout << "Booking deleted" << endl;
                        }
                        else
                        {
                            cout << "Booking not found" << endl;
                        }
                    }

        else if (choice == 3)
        {
            break;
        }
    }
}