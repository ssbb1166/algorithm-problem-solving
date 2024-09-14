#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int w, h, n, dir, idx, spacing, width, height;
vector<int> line[2];


int main()
{
    cin >> w >> h >> n;;

    while (n--) {
        cin >> dir >> idx;
        line[dir].push_back(idx);
    }

    line[0].push_back(h);
    line[1].push_back(w);

    sort(line[0].begin(), line[0].end());
    sort(line[1].begin(), line[1].end());

    height = line[0][0];
    for (int i = 1; i < line[0].size(); i++) {
        spacing = line[0][i] - line[0][i - 1];
        if (spacing > height)
            height = spacing;
    }

    width = line[1][0];
    for (int i = 1; i < line[1].size(); i++) {
        spacing = line[1][i] - line[1][i - 1];
        if (spacing > width)
            width = spacing;
    }

    cout << width * height;

    return 0;
}
