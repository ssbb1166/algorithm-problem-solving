#include <iostream>
#include <string>
using namespace std;


int cnt[26], max_cnt;
string sentence;


int main()
{
    for (int i = 0; i < 50; i++) {
        getline(cin, sentence);

        for (int j = 0; j < sentence.length(); j++)
            if (sentence[j] != ' ')
                cnt[sentence[j] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        if (cnt[i] > max_cnt)
            max_cnt = cnt[i];

    for (int i = 0; i < 26; i++)
        if (cnt[i] == max_cnt)
            cout << char(i + 'a');

    return 0;
}
