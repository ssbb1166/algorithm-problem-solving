#include <iostream>
using namespace std;


int n;


int main()
{
    while (cin >> n) {
        int multiple = 1, digits = 1;
        while (multiple % n > 0) {
            multiple *= 10;
            multiple += 1;
            multiple %= n;
            digits++;
        }
        cout << digits << '\n';
    }

    return 0;
}
