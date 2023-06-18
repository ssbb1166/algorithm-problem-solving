#include <iostream>
#include <string>
using namespace std;


int cnt[26];
string word;


int main()
{
    cin >> word;

    for (int i = 0; i < word.size(); i++)
        cnt[word[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        cout << cnt[i] << ' ';

    return 0;
}
