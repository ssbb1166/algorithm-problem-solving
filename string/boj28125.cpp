#include <iostream>
#include <string>
using namespace std;


int n, cnt;
string word;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> word;

        string original;
        cnt = 0;
        for (int j = 0; j < word.size(); j++) {
            switch (word[j]) {
            case '@': original += 'a'; cnt++; break;
            case '[': original += 'c'; cnt++; break;
            case '!': original += 'i'; cnt++; break;
            case ';': original += 'j'; cnt++; break;
            case '^': original += 'n'; cnt++; break;
            case '0': original += 'o'; cnt++; break;
            case '7': original += 't'; cnt++; break;
            case '\\':
                if (j < word.size() - 1 && word[j + 1] == '\'') {
                    original += 'v';
                    j += 1;
                }
                else if (j < word.size() - 2 && word[j + 1] == '\\' && word[j + 2] == '\'') {
                    original += 'w';
                    j += 2;
                }
                cnt++;
                break;
            default:
                original += word[j];
            }
        }

        if (cnt >= ((original.size() + 1) / 2))
            cout << "I don't understand" << '\n';
        else
            cout << original << '\n';
    }

    return 0;
}
