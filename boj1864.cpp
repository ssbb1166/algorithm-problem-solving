#include <cmath>
#include <iostream>
#include <string>
using namespace std;


int decimal;
string octal;


int main()
{
    while (1) {
        cin >> octal;

        if (octal == "#") break;

        decimal = 0;
        for (int i = octal.length() - 1; i >= 0; i--) {
            switch (octal[octal.length() - i - 1]) {
            case '-':
                break;
            case '\\':
                decimal += pow(8, i);
                break;
            case '(':
                decimal += 2 * pow(8, i);
                break;
            case '@':
                decimal += 3 * pow(8, i);
                break;
            case '?':
                decimal += 4 * pow(8, i);
                break;
            case '>':
                decimal += 5 * pow(8, i);
                break;
            case '&':
                decimal += 6 * pow(8, i);
                break;
            case '%':
                decimal += 7 * pow(8, i);
                break;
            case '/':
                decimal -= pow(8, i);
                break;
            }
        }

        cout << decimal << '\n';
    }

    return 0;
}
