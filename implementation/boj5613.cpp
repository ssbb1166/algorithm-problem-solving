#include <iostream>
using namespace std;


int res, num;
char op;


int main()
{
    cin >> res;

    while (true) {
        cin >> op;

        if (op == '=') break;

        cin >> num;

        switch (op) {
        case '+':
            res += num;
            break;
        case '-':
            res -= num;
            break;
        case '*':
            res *= num;
            break;
        case '/':
            res /= num;
            break;
        }
    }

    cout << res;

    return 0;
}
