#include <iostream>
#include <string>
using namespace std;


int n, m;
string shape;


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> shape;
        for (int j = m - 1; j >= 0; j--)
            cout << shape[j];
        cout << '\n';
    }

    return 0;
}
