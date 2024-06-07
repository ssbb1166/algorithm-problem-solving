#include <iostream>
using namespace std;


int t, a, b, num[10][4] = {
    { 10, 10, 10, 10 },
    { 1, 1, 1, 1 },
    { 6, 2, 4, 8 },
    { 1, 3, 9, 7 },
    { 6, 4, 6, 4 },
    { 5, 5, 5, 5 },
    { 6, 6, 6, 6 },
    { 1, 7, 9, 3 },
    { 6, 8, 4, 2 },
    { 1, 9, 1, 9 }
};


int main()
{
    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << num[a % 10][b % 4] << '\n';
    }

    return 0;
}
