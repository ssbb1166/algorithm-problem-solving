#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


string s, suffix;
vector<string> suffixs;


int main()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        suffix = s.substr(i);
        suffixs.push_back(suffix);
    }

    sort(suffixs.begin(), suffixs.end());

    for (int i = 0; i < suffixs.size(); i++)
        cout << suffixs[i] << '\n';

    return 0;
}
