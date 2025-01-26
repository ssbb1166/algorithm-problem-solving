#include <iostream>
using namespace std;


int r, c;


int main()
{
    cin >> r >> c;

    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
