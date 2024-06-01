#include <iostream>
#include <map>
using namespace std;


int n, max_cnt;
long long int x, res;
map<long long int, int> cnt;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
    }

    for (map<long long int, int>::iterator iter = cnt.begin(); iter != cnt.end(); iter++) {
        if (iter->second > max_cnt) {
            res = iter->first;
            max_cnt = iter->second;
        }
    }

    cout << res;

    return 0;
}
