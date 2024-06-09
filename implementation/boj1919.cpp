#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


int cnt[26], res;
string word1, word2;


int main()
{
    cin >> word1 >> word2;

    for (char c : word1)
        cnt[c - 'a']++;

    for (char c : word2)
        cnt[c - 'a']--;

    for (int i = 0; i < 26; i++)
        res += abs(cnt[i]);

    cout << res;

    return 0;
}
