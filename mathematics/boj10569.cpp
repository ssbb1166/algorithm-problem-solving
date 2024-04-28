#include <iostream>
using namespace std;


int t, v, e;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> v >> e;
        cout << 2 - v + e << '\n';
    }

    return 0;
}
