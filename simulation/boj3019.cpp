#include <iostream>
#include <vector>
using namespace std;


int c, p, cnt, field[100];
// 왼쪽 블록이 오른쪽 블록보다 얼마나 더 높아야 하는지
vector<vector<int>> block[8] = {
    {},
    { {}, {0, 0, 0} },
    { {0} },
    { {0, -1}, {1} },
    { {1, 0}, {-1} },
    { {0, 0}, {1}, {1, -1}, {-1} },
    { {0, 0}, {2}, {-1, 0}, {0} },
    { {0, 0}, {0}, {0, 1}, {-2} }
};


int main()
{
    cin >> c >> p;

    for (int i = 0; i < c; i++)
        cin >> field[i];

    for (int dir = 0; dir < block[p].size(); dir++) {
        vector<int> shape = block[p][dir];
        int width = shape.size();

        for (int fi = 0; fi < c - width; fi++) {
            bool possible = true;
            for (int bi = 0; bi < width; bi++)
                if (field[fi + bi] - field[fi + bi + 1] != shape[bi])
                    possible = false;
            cnt += possible;
        }
    }

    cout << cnt;

    return 0;
}
