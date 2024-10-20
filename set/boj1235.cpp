#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;


int n, len, pos;
string num[1000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> num[i];

    len = num[0].length();
    for (pos = num[0].length() - 1; pos > 0; pos--) {
        unordered_set<string> compressed;
        for (int i = 0; i < n; i++)
            compressed.insert(num[i].substr(pos));
        if (compressed.size() == n) break;
    }

    cout << len - pos;

    return 0;
}
