#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string number, original;


int main()
{
    while (1) {
        cin >> number;

        if (number == "0") break;

        original = number;
        reverse(number.begin(), number.end());

        if (number == original)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}
