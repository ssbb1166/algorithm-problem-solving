#include <iostream>
#include <string>
#include <vector>
using namespace std;


int n;
bool used[26];
string option;
vector<pair<string, int>> options;


int CharToInt(char alphabet)
{
    return alphabet - (alphabet >= 'A' && alphabet <= 'Z' ? 'A' : 'a');
}


void AssignShortcutKey(string option)
{
    for (int i = 0; option[i]; i++) {
        if (i == 0 || option[i - 1] == ' ') {
            int key = CharToInt(option[i]);
            if (!used[key]) {
                options.push_back({ option, i });
                used[key] = true;
                return;
            }
        }
    }

    if (options.empty() || options.back().first != option) {
        for (int i = 0; option[i]; i++) {
            if (option[i] == ' ') continue;
            int key = CharToInt(option[i]);
            if (!used[key]) {
                options.push_back({ option, i });
                used[key] = true;
                return;
            }
        }
    }

    if (options.empty() || options.back().first != option)
        options.push_back({ option, -1 });
}


void PrintShortcutKey()
{
    for (pair<string, int> option : options) {
        string word = option.first;
        int index = option.second;

        for (int i = 0; word[i]; i++) {
            if (i == index) cout << '[';
            cout << word[i];
            if (i == index) cout << ']';
        }

        cout << '\n';
    }
}


int main()
{
    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, option);
        AssignShortcutKey(option);
    }

    PrintShortcutKey();

    return 0;
}
