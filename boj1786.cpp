#include <iostream>
#include <string>
#include <vector>
using namespace std;


string t, p;
vector<int> res;


vector<int> MakeTable()
{
    vector<int> table(p.size(), 0);

    int j = 0;
    for (int i = 1; i < p.size(); i++) {
        while (j > 0 && p[i] != p[j])
            j = table[j - 1];

        if (p[i] == p[j])
            table[i] = ++j;
    }

    return table;
}


void KMP()
{
    vector<int> table = MakeTable();

    int j = 0;
    for (int i = 0; i < t.size(); i++) {
        while (j > 0 && t[i] != p[j])
            j = table[j - 1];

        if (t[i] == p[j]) {
            if (j == p.size() - 1) {
                res.push_back(i - p.size() + 2);
                j = table[j];
            }
            else {
                j++;
            }
        }
    }
}


int main()
{
    getline(cin, t);
    getline(cin, p);

    KMP();

    cout << res.size() << '\n';

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << ' ';
    cout << '\n';

    return 0;
}
