#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string str1, str2;
int len1, len2, lcs[1001][1001];


int main()
{
    cin >> str1 >> str2;

    len1 = str1.length();
    len2 = str2.length();

    for (int i = 1; i <= len1; i++) {
        for (int j = 1; j <= len2; j++) {
            if (str1[i - 1] == str2[j - 1])
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }

    cout << lcs[len1][len2];

    return 0;
}
