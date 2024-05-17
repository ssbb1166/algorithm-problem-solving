#include <cmath>
#include <iostream>
#include <string>
using namespace std;


string n;
int b, digits, decimal;


int main()
{
    cin >> n >> b;

    digits = n.size();

    for (int i = 0; i < digits; i++) {
        if (n[i] >= '0' && n[i] <= '9')
            decimal += (n[i] - '0') * pow(b, digits - i - 1);
        else
            decimal += (n[i] - 'A' + 10) * pow(b, digits - i - 1);
    }

    cout << decimal << '\n';

    return 0;
}
