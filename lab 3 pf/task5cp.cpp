#include <iostream>
#include <string>
using namespace std;

int main()
{
cout<<"Enter the student 's  name: ";
string name;
cin>>name;


cout<<"Enter matriculation marks(out of 1100): ";
int matric ;
cin>>matric;

cout<<"Enter intermediate marks(out of 550): ";
int inter;
cin>>inter;

cout<<"Enter ECAT Marks(out of 400): ";
int ecat;
cin>>ecat;

float aggregate;
 aggregate = (matric / 1100) * 10
              + (inter / 550) * 40
              + (ecat / 400) * 50;

    cout << "Aggregate score for " << name 
         << " is: " << aggregate << "%" << endl;

return 0;
}