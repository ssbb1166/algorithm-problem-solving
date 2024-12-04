#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n1, n2, t, idx;
string group1, group2;
pair<char, bool> ants[52];


int main()
{
    cin >> n1 >> n2 >> group1 >> group2 >> t;

    for (int i = n1 - 1; i >= 0; i--) {
        ants[idx].first = group1[i];
        ants[idx].second = true;
        idx++;
    }

    for (int i = 0; i < n2; i++) {
        ants[idx].first = group2[i];
        ants[idx].second = false;
        idx++;
    }

    while (t--) {
        for (int i = 0; i < n1 + n2 - 1; i++) {
            if (ants[i].second && !ants[i + 1].second) {
                swap(ants[i], ants[i + 1]);
                i++;
            }
        }
    }

    for (int i = 0; i < n1 + n2; i++)
        cout << ants[i].first;

    return 0;
}
