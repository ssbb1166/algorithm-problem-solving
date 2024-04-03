#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, len;
string password[100], word;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> password[i];

    for (int i = 0; i < n; i++) {
        word = password[i];
        len = word.length();
        reverse(word.begin(), word.end());
        if (find(password + i, password + n, word) != password + n) {
            cout << len << ' ' << word[len / 2] << '\n';
            break;
        }
    }

    return 0;
}
