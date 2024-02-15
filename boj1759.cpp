#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int l, c, vowels, consonants;
char alphabet;
vector<char> alphabets, selected;


void PrintPassword(int cnt, int idx)
{
    if (cnt == l) {
        vowels = consonants = 0;
        for (int i = 0; i < l; i++) {
            if (selected[i] == 'a' ||
                selected[i] == 'e' ||
                selected[i] == 'i' ||
                selected[i] == 'o' ||
                selected[i] == 'u')
                vowels++;
            else
                consonants++;
        }

        if (vowels >= 1 && consonants >= 2) {
            for (int i = 0; i < l; i++)
                cout << selected[i];
            cout << '\n';
        }

        return;
    }

    for (int i = idx; i < c; i++) {
        selected.push_back(alphabets[i]);
        PrintPassword(cnt + 1, i + 1);
        selected.pop_back();
    }
}


int main()
{
    cin >> l >> c;

    for (int i = 0; i < c; i++) {
        cin >> alphabet;
        alphabets.push_back(alphabet);
    }

    sort(alphabets.begin(), alphabets.end());

    PrintPassword(0, 0);

    return 0;
}
