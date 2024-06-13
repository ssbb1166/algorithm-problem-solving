#include <iostream>
#include <string>
using namespace std;


int n, p;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p;
        cout << 100 + i;
        for (int j = 0; j < p; j++)
            cout << 0;
        cout << ' ';
    }

    return 0;
}
