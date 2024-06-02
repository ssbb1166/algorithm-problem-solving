#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int t, a, b, c, d;
vector<int> answer[6] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {0, 1, 4, 5},
    {2, 3, 6, 7},
    {0, 2, 4, 6},
    {1, 3, 5, 7}
};

int main()
{
    cin >> t;

    while (t--) {
        cin >> a >> b >> c >> d;

        vector<int> points;
        points.push_back(a);
        points.push_back(b);
        points.push_back(c);
        points.push_back(d);

        sort(points.begin(), points.end());

        bool one = false;
        for (int i = 0; i < 6; i++)
            if (points == answer[i])
                one = true;

        if (one)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
