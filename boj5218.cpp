#include <iostream>
#include <string>
using namespace std;


int t;
string x, y;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> y;

        cout << "Distances:";
        for (int j = 0; j < x.length(); j++)
            if (y[j] >= x[j])
                cout << ' ' << y[j] - x[j];
            else
                cout << ' ' << (y[j] + 26) - x[j];
        cout << '\n';
    }

    return 0;
}
