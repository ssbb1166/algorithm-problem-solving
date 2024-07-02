#include <iostream>
#include <map>
#include <string>
using namespace std;


int n, max_cnt;
string word, res;
map<string, int> cnt;


int main()
{
    cin >> n;

    while (n--) {
        cin >> word;
        cnt[word]++;
        if (cnt[word] > max_cnt) {
            res = word;
            max_cnt = cnt[word];
        }
        else if (cnt[word] == max_cnt && res < word) {
            res = word;
        }
    }

    cout << res << ' ' << max_cnt;

    return 0;
}
