#include <iostream>
#include <string>
using namespace std;


int a, b;
bool back;
string input, n, m;


int GCD(int a, int b)
{
    int c;
    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}


int main()
{
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ':') {
            back = true;
            continue;
        }

        if (!back)
            n += input[i];
        else
            m += input[i];
    }

    a = stoi(n);
    b = stoi(m);

    cout << a / GCD(a, b) << ':' << b / GCD(a, b);

    return 0;
}
