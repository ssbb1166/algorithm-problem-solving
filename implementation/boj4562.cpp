#include <iostream>
using namespace std;


int n, x, y;


int main()
{
    cin >> n;

    while (n--) {
        cin >> x >> y;
        cout << (x >= y ? "MMM BRAINS" : "NO BRAINS") << '\n';
    }

    return 0;
}
