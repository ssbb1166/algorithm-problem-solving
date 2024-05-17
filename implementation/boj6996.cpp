#include <iostream>
#include <string>
using namespace std;


int t, cnt[26];
bool is_anagram;
string word1, word2;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> word1 >> word2;

        for (int j = 0; j < 26; j++)
            cnt[j] = 0;

        for (int j = 0; j < word1.length(); j++)
            cnt[word1[j] - 'a']++;

        for (int j = 0; j < word2.length(); j++)
            cnt[word2[j] - 'a']--;

        is_anagram = true;
        for (int j = 0; j < 26; j++)
            if (cnt[j] != 0)
                is_anagram = false;

        if (is_anagram)
            cout << word1 << " & " << word2 << " are anagrams.\n";
        else
            cout << word1 << " & " << word2 << " are NOT anagrams.\n";
    }

    return 0;
}
