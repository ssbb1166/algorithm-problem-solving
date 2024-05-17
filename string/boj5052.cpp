#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int t, n;
string tel;
vector<string> telbook;
bool consistent;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        telbook.clear();
        for (int j = 0; j < n; j++) {
            cin >> tel;
            telbook.push_back(tel);
        }

        sort(telbook.begin(), telbook.end());

        consistent = true;
        for (int j = 0; j < n - 1; j++)
            if (telbook[j] == telbook[j + 1].substr(0, telbook[j].length()))
                consistent = false;

        if (consistent)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
