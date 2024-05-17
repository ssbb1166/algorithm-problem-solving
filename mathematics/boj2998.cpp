#include <iostream>
#include <string>
using namespace std;


string binary;


int main()
{
    cin >> binary;

    while (binary.length() % 3 > 0)
        binary = '0' + binary;

    for (int i = 0; i < binary.length(); i += 3)
        cout << (binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0') * 1;

    return 0;
}
