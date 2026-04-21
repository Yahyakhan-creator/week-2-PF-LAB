#include <iostream>
#include <cmath>
using namespace std;

double calculateHeight(double num1 , double angle)
{
    double radians = angle * (3.14/180);
    return num1 * tan(radians);
}

int main()
{
int num1,angle;
cout<<"Enter distance in feet.:";
cin>>num1;
cout<<"the angle of derivation :";
cin>>angle;


cout<<"the height of tree is "<<calculateHeight(num1,angle)<<" feet"<<endl;

return 0;
}