#include <iostream>
using namespace std;


int t;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x1, y1, r1, x2, y2, r2, dist, cond1, cond2;
        
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        dist = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        cond1 = (r2 - r1) * (r2 - r1);
        cond2 = (r1 + r2) * (r1 + r2);
        
        if (dist == 0 && cond1 == 0)
            cout << -1 << '\n'
        else if (dist > cond1 && dist < cond2)
            cout << 2 << '\n';
        else if (dist == cond1 || dist == cond2)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}
