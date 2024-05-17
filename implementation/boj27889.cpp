#include <iostream>
#include <string>
using namespace std;


string initial;


int main()
{
    cin >> initial;
    
    if (initial == "NLCS")
        cout << "North London Collegiate School" << '\n';
    else if (initial == "BHA")
        cout << "Branksome Hall Asia" << '\n';
    else if (initial == "KIS")
        cout << "Korea International School" << '\n';
    else
        cout << "St. Johnsbury Academy" << '\n';

    return 0;
}
