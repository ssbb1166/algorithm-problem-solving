#include <cmath>
#include <iostream>
#include <string>
using namespace std;


string message;
int n, r, c, idx;
char map[100][100];


int main()
{
    cin >> message;

    n = message.length();

    for (int i = 0; i <= sqrt(n); i++) {
        for (int j = i; j <= n; j++) {
            if (i * j == n) {
                r = i;
                c = j;
                break;
            }
        }
    }

    for (int col = 0; col < c; col++)
        for (int row = 0; row < r; row++)
            map[row][col] = message[idx++];

    for (int row = 0; row < r; row++)
        for (int col = 0; col < c; col++)
            cout << map[row][col];
    cout << '\n';

    return 0;
}
