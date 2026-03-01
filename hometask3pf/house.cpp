#include <iostream>
using namespace std;
int main()
{
cout<<"Enter the person age:";
int age;
cin>>age;

cout<<"Enter the number of times they've moved:";
int move;
cin>>move;

int house;
house=age/(move+1);
cout<<"Average number of years lived in the same house:"<<house;

return 0;
}
