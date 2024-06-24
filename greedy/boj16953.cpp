#include <iostream>
using namespace std;


int a, b, cnt;


int main()
{
    cin >> a >> b;

    while (a < b) {
        if (b % 2 == 0) {
            b /= 2;
            cnt++;
        }
        else if (b % 10 == 1) {
            b /= 10;
            cnt++;
        }
        else {
            break;
        }
    }

    cout << (a == b ? cnt + 1 : -1);

    return 0;
}
