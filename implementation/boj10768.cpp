#include <iostream>
using namespace std;


int month, date;


int main()
{
    cin >> month >> date;

    if (month < 2 || month == 2 && date < 18)
        cout << "Before" << '\n';
    else if (month > 2 || month == 2 && date > 18)
        cout << "After" << '\n';
    else
        cout << "Special" << '\n';

    return 0;
}
