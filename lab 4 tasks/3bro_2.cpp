#include <iostream>
using namespace std;
 main()
{
int age_1,age_2,age_3;
string name_1;
    cout<<"Enter the first brother name:";
cin>>name_1;
    cout<<"Enter the first brother age:";
    cin>>age_1;
string name_2;
        cout<<"Enter the 2 brother name:";
cin>>name_2;
    cout<<"Enter the 2 brother age:";
    cin>>age_2;
  string name_3;
        cout<<"Enter the 3 brother name:";
cin>>name_3;

 
    cout<<"Enter the 3 brother age:";
    cin>>age_3;
    if(age_1 < age_2 && age_1 < age_3)
    {
        cout << name_1 << " is youngest" << endl;
    }
    else
    {
        if(age_2 < age_1 && age_2 < age_3)
        {
            cout << name_2 << " is youngest" << endl;
        }
        else
        {
            cout << name_3 << " is youngest" << endl;
        }
}


    
      
return 0;
}

    
    
