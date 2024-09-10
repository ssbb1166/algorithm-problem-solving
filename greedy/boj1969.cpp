#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, m, sum, cnt[50][4];
string s;


int CharToInt(char c)
{
    switch (c) {
    case 'A': return 0;
    case 'C': return 1;
    case 'G': return 2;
    case 'T': return 3;
    }
}


char IntToChar(int i)
{
    switch (i) {
    case 0: return 'A';
    case 1: return 'C';
    case 2: return 'G';
    case 3: return 'T';
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++)
            cnt[j][CharToInt(s[j])]++;
    }

    for (int i = 0; i < m; i++) {
        int max_cnt = 0;
        char c;
        for (int j = 0; j < 4; j++) {
            if (cnt[i][j] > max_cnt) {
                max_cnt = cnt[i][j];
                c = IntToChar(j);
            }
        }
        sum += n - max_cnt;
        cout << c;
    }

    cout << '\n' << sum;

    return 0;
}
