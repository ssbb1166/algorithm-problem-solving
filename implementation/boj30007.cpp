#include <iostream>
using namespace std;


int n, a, b, x;


int main()
{
    cin >> n;

    while (n--) {
        cin >> a >> b >> x;
        cout << a * (x - 1) + b << '\n';
    }

    return 0;
}
