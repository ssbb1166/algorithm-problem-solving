#include <iostream>
using namespace std;


int n, k;


int main()
{
    cin >> n;

    while (n--) {
        cin >> k;
        for (int i = 0; i < k; i++)
            cout << '=';
        cout << '\n';
    }

    return 0;
}
