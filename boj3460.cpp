#include <iostream>
using namespace std;


int t, n, digit;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        digit = 0;
        while (n > 0) {
            if (n % 2 == 1)
                cout << digit << ' ';
            n /= 2;
            digit++;
        }
    }

    return 0;
}
