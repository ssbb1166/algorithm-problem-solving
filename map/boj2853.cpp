#include <iostream>
#include <map>
using namespace std;


int n, num, list[5000], cnt;
map<int, bool> day;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> list[0];

    for (int i = 1; i < n; i++) {
        cin >> list[i];
        day[--list[i]] = true;
    }

    for (int i = 1; i < n; i++) {
        if (day[list[i]]) {
            int tmp = list[i];
            while (tmp <= list[n - 1]) {
                day[tmp] = false;
                tmp += list[i];
            }
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
