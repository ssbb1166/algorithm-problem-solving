#include <iostream>
#include <string>
using namespace std;


string x;


int main()
{
    cin >> x;

    if (x[0] == '0' && x[1] == 'x')
        cout << stoi(x, nullptr, 16) << '\n';
    else if (x[0] == '0')
        cout << stoi(x, nullptr, 8) << '\n';
    else
        cout << x << '\n';

    return 0;
}
