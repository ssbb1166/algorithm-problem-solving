#include <iostream>
#include <string>
using namespace std;


int cnt[26], res;
string word1, word2;


int main()
{
    cin >> word1 >> word2;

    for (int i = 0; i < word1.length(); i++)
        cnt[word1[i] - 'a']++;

    for (int i = 0; i < word2.length(); i++)
        cnt[word2[i] - 'a']--;

    for (int i = 0; i < 26; i++)
        res += abs(cnt[i]);

    cout << res << '\n';

    return 0;
}
