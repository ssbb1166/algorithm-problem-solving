#include <iostream>
#include <string>
using namespace std;


string word, res;


int main()
{
    cin >> word;

    for (int i = 0; i <= word.length() - 1; i++)
        res += 'z';

    for (int i = 0; i <= word.length() - 3; i++) {
        for (int j = i + 1; j <= word.length() - 2; j++) {
            string tmp = "";
            for (int k = i; k >= 0; k--)
                tmp += word[k];
            for (int k = j; k >= i + 1; k--)
                tmp += word[k];
            for (int k = word.length() - 1; k >= j + 1; k--)
                tmp += word[k];
            if (tmp < res)
                res = tmp;
        }
    }

    cout << res;

    return 0;
}
