#include <cmath>
#include <iostream>
#include <string>
using namespace std;


int n, first, second, value;
string num;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;

        first = 0;
        first += (num[0] - 'A') * 26 * 26;
        first += (num[1] - 'A') * 26;
        first += (num[2] - 'A');
        second = stoi(num.substr(4));

        value = abs(first - second);

        if (value <= 100)
            cout << "nice" << '\n';
        else
            cout << "not nice" << '\n';
    }

    return 0;
}
