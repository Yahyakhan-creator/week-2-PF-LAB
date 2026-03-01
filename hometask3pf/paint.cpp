#include <iostream>
using namespace std;
int main()
{
cout<<"number of square metres you can paint: ";
int n;
cin>>n;

cout<<"width of single wall (in metres): ";
int w;
cin>>w;

cout<<"height of single wall (in metres): ";
int h;
cin>>h;

int area;
area=w*h;


int paint;
paint=n/area;
cout<<"number of walls you can paint: "<<paint;

return 0;
}
