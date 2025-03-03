#include <iostream>
using namespace std;


int n;
bool fail;


int main()
{
    for (int i = 1; i <= 8; i++) {
        cin >> n;
        if (n == 9) fail = true;
    }

    cout << (!fail ? 'S' : 'F');

    return 0;
}
