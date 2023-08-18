#include <iostream>
#include <string>
using namespace std;


string sentence;
bool cnt[26];
int sum;


int main()
{
    while (1) {
        getline(cin, sentence);

        if (sentence == "*") break;

        for (int i = 0; i < 26; i++)
            cnt[i] = false;

        for (int i = 0; i < sentence.length(); i++)
            if (sentence[i] >= 'a' && sentence[i] <= 'z')
                cnt[sentence[i] - 'a'] = true;

        sum = 0;
        for (int i = 0; i < 26; i++)
            if (cnt[i]) sum++;

        if (sum == 26)
            cout << 'Y' << '\n';
        else
            cout << 'N' << '\n';
    }

    return 0;
}
