#include <iostream>
using namespace std;


int t, a, b;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}
