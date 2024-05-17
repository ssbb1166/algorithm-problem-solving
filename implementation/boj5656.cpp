#include <iostream>
#include <string>
using namespace std;


int a, b, i = 1;
string op;


int main()
{
    while (1) {
        cin >> a >> op >> b;

        if (op == "E") break;

        bool answer = false;
        if ((op == ">" && a > b) ||
            (op == "<" && a < b) ||
            (op == ">=" && a >= b) ||
            (op == "<=" && a <= b) ||
            (op == "==" && a == b) ||
            (op == "!=" && a != b))
            answer = true;

        if (answer)
            cout << "Case " << i << ": true" << '\n';
        else
            cout << "Case " << i << ": false" << '\n';

        i++;
    }

    return 0;
}
