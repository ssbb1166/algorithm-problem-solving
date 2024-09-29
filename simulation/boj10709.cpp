#include <iostream>
#include <string>
using namespace std;


int h, w, x, y, t;
string row;


int main()
{
    cin >> h >> w;

    for (y = 0; y < h; y++) {
        cin >> row;

        x = 0;
        while (x < w && row[x] != 'c') {
            cout << -1 << ' ';
            x++;
        }

        while (x < w) {
            if (row[x++] == 'c') t = 0;
            cout << t++ << ' ';
        }
        cout << '\n';
    }

    return 0;
}
