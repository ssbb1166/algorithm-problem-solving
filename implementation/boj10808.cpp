#include <iostream>
#include <string>
using namespace std;


int cnt[26];
string s;


int main()
{
    cin >> s;

    for (char alphabet : s)
        cnt[alphabet - 'a']++;

    for (int i = 0; i < 26; i++)
        cout << cnt[i] << ' ';

    return 0;
}
