#include <iostream>
using namespace std;


int n, x, a;


int main()
{
    cin >> n >> x;

    while (n--) {
        cin >> a;
        if (a < x) cout << a << ' ';
    }

    return 0;
}
