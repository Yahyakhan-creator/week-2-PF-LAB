#include <iostream>
using namespace std;

int main()

{
    string username, password;
    string name="";
    int age=0;
    int choice;

    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    if(username == "admin" && password == "1234")
    {
        cout << "Login Successful" << endl;
    }
    else
    {
        cout << "Login Failed" << endl;
        return 0;
    }

    while(choice != 4)
    {
        cout << "---- University Management System ----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Student" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter Student Age: ";
            cin >> age;
            cout << "Student Added Successfully" << endl;
        }
        else if(choice == 2)
        {
            cout << "Student Name: " << name << endl;
            cout << "Student Age: " << age << endl;
        }
        else if(choice == 3)
        {
            string course;
            cout << "Enter Course Name: ";
            cin >> course;
            cout << "Course Added Successfully" << endl;
        }
        else if(choice == 4)
        {
            cout << "Program Exit" << endl;
        }
    }

    return 0;
}