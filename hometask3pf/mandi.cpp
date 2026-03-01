#include <iostream>
using namespace std;
int main()
{
float veg;
cout<<"Enter vegetable price per kilograms in coins:";
cin>>veg;

float fruit;
cout<<"Enter the price of fruits per kilo in coins:";
cin>>fruit;

int totalveg;
cout<<"Enter the total kilo of vegetable:";
cin>>totalveg;

int totalfruits;
cout<<"Enter the total kilo of fruits :";
cin>>totalfruits;

float totalearn;
totalearn=(veg*totalveg)+(fruit*totalfruits);

float convert;
 convert=totalearn/1.94;
cout<<"Total earning in PKR is "<<convert;

return 0;
}