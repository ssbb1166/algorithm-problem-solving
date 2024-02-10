#include <iostream>
#include <map>
#include <string>
using namespace std;


int sum;
string tree;
map<string, double> cnt;


int main()
{
    while (getline(cin, tree)) {
        sum++;

        if (cnt.count(tree) == 0)
            cnt[tree] = 1;
        else
            cnt[tree]++;
    }

    cout << fixed;
    cout.precision(4);

    for (auto it = cnt.begin(); it != cnt.end(); it++) {
        cout << it->first << ' ';
        cout << (it->second / sum) * 100 << '\n';
    }

    return 0;
}
