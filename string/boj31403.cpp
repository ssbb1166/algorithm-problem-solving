#include <iostream>
#include <string>
using namespace std;


string a, b, c;


int main()
{
    cin >> a >> b >> c;

    cout << stoi(a) + stoi(b) - stoi(c) << '\n';
    cout << stoi(a + b) - stoi(c);

    return 0;
}
