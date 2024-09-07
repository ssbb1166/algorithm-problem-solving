#include <iostream>
#include <vector>
using namespace std;


int a, b, m, digit, decimal, mul = 1;
vector<int> digits;


int main()
{
    cin >> a >> b >> m;

    for (int i = 1; i < m; i++)
        mul *= a;

    for (int i = m - 1; i >= 0; i--) {
        cin >> digit;
        decimal += digit * mul;
        mul /= a;
    }

    while (decimal > 0) {
        digits.push_back(decimal % b);
        decimal /= b;
    }

    for (int i = digits.size() - 1; i >= 0; i--)
        cout << digits[i] << ' ';

    return 0;
}
