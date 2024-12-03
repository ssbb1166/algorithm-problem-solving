#include <iostream>
#include <queue>
#include <string>
using namespace std;


int n, len, idx;
string line;
queue<char> digits;


bool IncludeNumber(string n, string num)
{
    for (char digit : n)
        digits.push(digit);

    for (int i = 0; num[i]; i++) {
        if (digits.empty()) return false;
        if (digits.front() != num[i]) i--;
        digits.pop();
    }

    return true;
}


int main()
{
    cin >> line;

    len = line.length();
    while (idx < len) {
        string num = to_string(++n);
        for (int digit = num.length(); digit > 0; digit--) {
            if (idx + digit <= len && IncludeNumber(num, line.substr(idx, digit))) {
                idx += digit;
                break;
            }
        }
    }

    cout << n;

    return 0;
}
