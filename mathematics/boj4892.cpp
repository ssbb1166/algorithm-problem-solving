#include <iostream>
using namespace std;


int n, t;


int main()
{
    while (true) {
        cin >> n;
        if (n == 0) break;
        cout << ++t << ". " << (n % 2 == 0 ? "even" : "odd") << " " << n / 2 << '\n';
    }

    return 0;
}
