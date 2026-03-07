  #include <iostream>
using namespace std;

int main()
{
    int salary = 10000;
    int laptop_price = 50000;

    int advance_per_month = salary * 0.5;
    int total_advance = advance_per_month * 6;
 int months = laptop_price / advance_per_month;

    if (total_advance >= laptop_price)
    {
        cout << "Ali can buy the laptop with advance salary." << endl;
    }
    else
    {

        cout << "Months required to buy laptop: " << months << endl;
    }

    return 0;
}
