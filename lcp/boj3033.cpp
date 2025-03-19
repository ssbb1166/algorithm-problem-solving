#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int t, l, n, len, sa[200001], pos[200001], lcp[200001], tmp[200001];
string s;


void Initialize()
{
    n = s.length();
    for (int i = 0; i < n; i++) {
        sa[i] = i;
        pos[i] = s[i];
    }
}


bool Compare(int a, int b)
{
    if (pos[a] == pos[b])
        return pos[a + len] < pos[b + len];
    return pos[a] < pos[b];
}


void MakesaArray()
{
    for (len = 1; len < n; len <<= 1) {
        sort(sa, sa + n, Compare);
        tmp[sa[0]] = 0;

        for (int i = 1; i < n; i++)
            tmp[sa[i]] = tmp[sa[i - 1]] + Compare(sa[i - 1], sa[i]);

        for (int i = 0; i < n; i++)
            pos[i] = tmp[i];
    }
}


void MakeLCP()
{
    for (int i = 0; i < n; i++)
        pos[sa[i]] = i;

    for (int i = 0, len = 0; i < n; i++, len -= (len > 0)) {
        if (!pos[i]) continue;
        for (int j = sa[pos[i] - 1]; s[i + len] == s[j + len]; len++);
        lcp[pos[i]] = len;
    }
}


int GetLongestSubstringLength()
{
    int res = 0;

    Initialize();
    MakesaArray();
    MakeLCP();

    for (int i = 0; i < n; i++)
        res = max(res, lcp[i]);

    return res;
}


int main()
{
    cin >> l >> s;
    cout << GetLongestSubstringLength();

    return 0;
}
