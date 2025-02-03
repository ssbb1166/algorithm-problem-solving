#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string n, m, res;
int val, carry;


int main()
{
    cin >> n;

    m = n + "0000";

    while (!n.empty()) {
        val = (n.back() - '0') + (m.back() - '0') + carry;
        res += to_string(val & 1);
        carry = val >> 1;
        n.pop_back();
        m.pop_back();
    }

    while (!m.empty()) {
        val = (m.back() - '0') + carry;
        res += to_string(val & 1);
        carry = val >> 1;
        m.pop_back();
    }

    if (carry) res += "1";

    reverse(res.begin(), res.end());

    cout << res;

    return 0;
}
