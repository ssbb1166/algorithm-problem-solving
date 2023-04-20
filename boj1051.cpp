#include <iostream>
#include <string>
using namespace std;


int n, m, side, rect[50][50];


int GetSide()
{
    // 정사각형 변의 길이를 1씩 줄이면서 확인
    for (int side = n < m ? n : m; side > 0; side--) {
        for (int i = 0; i <= n - side; i++) {
            for (int j = 0; j <= m - side; j++) {
                int v1 = rect[i][j];
                int v2 = rect[i + side - 1][j];
                int v3 = rect[i + side - 1][j + side - 1];
                int v4 = rect[i][j + side - 1];
                if (v1 == v2 && v2 == v3 && v3 == v4) return side;
            }
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < m; j++)
            rect[i][j] = line[j] - '0';
    }

    side = GetSide();

    cout << side * side << '\n';

    return 0;
}
