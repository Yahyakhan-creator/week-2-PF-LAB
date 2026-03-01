#include <iostream>
using namespace std;
 int main()
{
string name;
cout<<"Enter the name : ";
cin>>name;

float loss;
cout<<"enter the target weight loss in kilogram: ";
cin>>loss;

float doctor;
doctor=(loss*15);
cout<<name <<" will need "<< doctor <<" days to lose " << loss<<" kg of weight by following the doctor's suggestion.";

return 0;
}

