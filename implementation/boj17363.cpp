#include <iostream>
using namespace std;


int n, m;
char paint[100][100];


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < m; x++) {
            switch (line[x]) {
            case '.': paint[m - x - 1][y] = '.'; break;
            case 'O': paint[m - x - 1][y] = 'O'; break;
            case '-': paint[m - x - 1][y] = '|'; break;
            case '|': paint[m - x - 1][y] = '-'; break;
            case '/': paint[m - x - 1][y] = '\\'; break;
            case '\\': paint[m - x - 1][y] = '/'; break;
            case '^': paint[m - x - 1][y] = '<'; break;
            case '<': paint[m - x - 1][y] = 'v'; break;
            case 'v': paint[m - x - 1][y] = '>'; break;
            case '>': paint[m - x - 1][y] = '^'; break;
            }
        }
    }

    for (int y = 0; y < m; y++) {
        for (int x = 0; x < n; x++)
            cout << paint[y][x];
        cout << '\n';
    }

    return 0;
}
