#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;


int n, m;
string word;
vector<string> words;
map<string, int> cnt;


bool cmp(string a, string b)
{
    if (a.length() == b.length() && cnt[a] == cnt[b])
        return a < b;

    if (cnt[a] == cnt[b])
        return a.length() > b.length();

    return cnt[a] > cnt[b];
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> word;
        
        if (word.length() < m)
            continue;

        if (cnt.count(word) == 0) {
            cnt[word] = 0;
            words.push_back(word);
        }

        cnt[word]++;
    }

    sort(words.begin(), words.end(), cmp);

    for (int i = 0; i < words.size(); i++)
        cout << words[i] << '\n';

    return 0;
}
