#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    double a, b, c;
    cout << "enter value of a :";
    cin >> a;
    cout << "enter value of b :";
    cin >> b;
    cout << "enter value of c ";
    cin >> c;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "solutions : x =" << root1 << "and x =" << root2 << endl;
    }
    else if (discriminant == 0)
    {
        double root1 = -b / (2 * a);

        cout << "solution :x =" << root1 << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "complex solutions : x=" << realPart << "+" << imaginaryPart << "and x=" << realPart << "-" << imaginaryPart << endl;
    }
    return 0;
}