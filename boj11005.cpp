#include <iostream>
#include <stack>
using namespace std;


int n, b, digit;
stack<int> res;


int main()
{
    cin >> n >> b;

    while (n > 0) {
        digit = n % b;
        res.push(digit);
        n /= b;
    }

    while (!res.empty()) {
        digit = res.top();
        res.pop();
        if (digit >= 10)
            cout << char(digit - 10 + 'A');
        else
            cout << digit;
    }

    return 0;
}
