#include <iostream>
#include <string>
using namespace std;


int n;


void Repeat(int cnt, string str)
{
    for (int col = 0; col < cnt; col++)
        cout << str;
}


void PrintTopLine(int row, int n, string c)
{
    Repeat(row, "* ");
    cout << c;
    Repeat(2 * (n - row) - 1, c + c);
    Repeat(row - 1, " *");
    cout << '\n';
}


void PrintBottomLine(int row, int n, string c)
{
    Repeat(n - row, "* ");
    Repeat(4 * row - 3, c);
    Repeat(n - row, " *");
    cout << '\n';
}


int main()
{
    cin >> n;

    if (n > 1) {
        Repeat(4 * n - 3, "*");
        cout << '\n';
    }

    for (int row = 1; row < n; row++) {
        if (row == 1)
            cout << "*" << '\n';
        else
            PrintTopLine(row, n, " ");
        PrintTopLine(row, n, "*");
    }

    Repeat(2 * n - 2, "* ");
    cout << "*" << '\n';

    for (int row = 1; row < n; row++) {
        PrintBottomLine(row, n, "*");
        PrintBottomLine(row, n, " ");
    }

    if (n > 1) {
        Repeat(4 * n - 3, "*");
        cout << '\n';
    }

    return 0;
}
