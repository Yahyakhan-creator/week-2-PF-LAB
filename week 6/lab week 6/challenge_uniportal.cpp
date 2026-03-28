#include <iostream>
using namespace std;

int main()
{
    string usernames[3];
    string username;
    int password;

    string students[3];
    int ages[3];
    string courses[3];

    int studentCount = 0;
    int courseCount = 0;

    string correctUsername = "admin";
    int correctPassword = 1234;

    int loginSuccess = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter username: ";
        cin >> username;
        usernames[i] = username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword)
        {
            cout << "Login Successful" << endl;
            loginSuccess = 1;
            break;
        }
        else
        {
            cout << "Wrong username or password" << endl;
        }
    }

    if (loginSuccess == 1)
    {
        int choice = 0;

        while (choice != 5)
        {
            cout << endl;
            cout << "1 -> Add Student" << endl;
            cout << "2 -> View Students" << endl;
            cout << "3 -> Add Course" << endl;
            cout << "4 -> View Courses" << endl;
            cout << "5 -> Exit" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1)
            {
                if (studentCount < 3)
                {
                    cout << "Enter student name: ";
                    cin >> students[studentCount];

                    cout << "Enter student age: ";
                    cin >> ages[studentCount];

                    studentCount++;

                    cout << "Student added successfully" << endl;
                }
                else
                {
                    cout << "Student limit reached" << endl;
                }
            }
            else if (choice == 2)
            {
                if (studentCount == 0)
                {
                    cout << "No students added" << endl;
                }
                else
                {
                    cout << "Student List:" << endl;
                    for (int i = 0; i < studentCount; i++)
                    {
                        cout << "Name: " << students[i] << ", Age: " << ages[i] << endl;
                    }
                }
            }
            else if (choice == 3)
            {
                if (courseCount < 3)
                {
                    cout << "Enter course name: ";
                    cin >> courses[courseCount];

                    courseCount++;

                    cout << "Course added successfully" << endl;
                }
                else
                {
                    cout << "Course limit reached" << endl;
                }
            }
            else if (choice == 4)
            {
                if (courseCount == 0)
                {
                    cout << "No courses added" << endl;
                }
                else
                {
                    cout << "Course List:" << endl;
                    for (int i = 0; i < courseCount; i++)
                    {
                        cout << courses[i] << endl;
                    }
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
        }
    }

    return 0;
}