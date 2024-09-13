#include <iostream>
using namespace std;


int n, k, triangle[31][31];


int main()
{
    cin >> n >> k;

    triangle[1][1] = 1;
    for (int row = 2; row <= n; row++)
        for (int i = 1; i <= row; i++)
            triangle[row][i] = triangle[row - 1][i - 1] + triangle[row - 1][i];

    cout << triangle[n][k];

    return 0;
}
