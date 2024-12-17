#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string num1, num2, res;
int idx, carry;


int CharToInt(char c)
{
    return c - '0';
}


char IntToChar(int i)
{
    return i + '0';
}


void AddDigits()
{
    int sum = CharToInt(num1[idx]) + CharToInt(num2[idx]) + carry;
    res.push_back(IntToChar(sum & 1));
    carry = sum >> 1;
    idx++;
}


int main()
{
    cin >> num1 >> num2;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    while (num1.length() < num2.length())
        num1.push_back('0');

    while (num1.length() > num2.length())
        num2.push_back('0');

    while (num1[idx] && num2[idx])
        AddDigits();

    if (carry) res.push_back('1');

    while (res[res.length() - 1] == '0')
        res.pop_back();

    reverse(res.begin(), res.end());

    cout << (!res.empty() ? res : "0");

    return 0;
}
