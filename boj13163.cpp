#include <iostream>
#include <string>
using namespace std;


int n;
string nickname, res;


int main()
{
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, nickname);

        int idx = 0;
        while (nickname[idx] != ' ') idx++;

        cout << "god";
        for (int j = idx; j < nickname.length(); j++)
            if (nickname[j] != ' ') cout << nickname[j];
        cout << '\n';
    }

    return 0;
}
