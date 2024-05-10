#include <iostream>
#include <map>
#include <string>
using namespace std;


int n, max_cnt;
string title, best;
map<string, int> cnt;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> title;
        cnt[title]++;
    }

    for (auto it = cnt.begin(); it != cnt.end(); it++)
        if (it->second > max_cnt)
            max_cnt = it->second;

    for (auto it = cnt.begin(); it != cnt.end(); it++) {
        if (it->second == max_cnt) {
            best = it->first;
            break;
        }
    }
    
    cout << best << '\n';

    return 0;
}
