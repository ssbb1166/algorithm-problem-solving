#include <iostream>
using namespace std;


int a, b;


int main()
{
    while (true) {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        cout << 2 * a - b << '\n';
    }

    return 0;
}
