#include <algorithm>
#include <iostream>
using namespace std;


int n, matrix[1024][1024];


int Pooling(int x, int y, int n)
{
    if (n == 1) return matrix[y][x];

    int a[4];
    a[0] = Pooling(x, y, n / 2);
    a[1] = Pooling(x + n / 2, y, n / 2);
    a[2] = Pooling(x, y + n / 2, n / 2);
    a[3] = Pooling(x + n / 2, y + n / 2, n / 2);

    sort(a, a + 4);

    return a[2];
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            cin >> matrix[y][x];

    cout << Pooling(0, 0, n);

    return 0;
}
