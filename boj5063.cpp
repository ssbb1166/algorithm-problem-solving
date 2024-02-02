#include <iostream>
using namespace std;


int n, r, e, c;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> r >> e >> c;
        if (r <  e - c)
            cout << "advertise" << '\n';
        else if (r > e - c)
            cout << "do not advertise" << '\n';
        else
            cout << "does not matter" << '\n';
    }

    return 0;
}
