#include <iostream>
#include <string>
using namespace std;


int digit, mul, sum;
string n;


int main()
{
    cin >> n;

    for (int i = 0; n[i]; i++) {
        mul = 1;
        digit = n[i] - '0';
        for (int j = 0; j < 5; j++)
            mul *= digit;
        sum += mul;
    }

    cout << sum;

    return 0;
}
