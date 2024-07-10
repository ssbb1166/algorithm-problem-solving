#include <iostream>
#include <set>
using namespace std;


int n, m, cnt;


int main()
{
    cin >> n >> m;

    for (int x = n; x <= m; x++) {
        set<int> s;
        int min_digit = 10, max_digit;
        for (max_digit = 1; max_digit * 10 <= x; max_digit *= 10);
        while (min_digit < x) {
            int y = (x % min_digit) * max_digit + x / min_digit;
            if (y > x && y <= m && s.find(y) == s.end()) {
                s.insert(y);
                cnt++;
            }
            min_digit *= 10;
            max_digit /= 10;
        }
    }

    cout << cnt;

    return 0;
}
