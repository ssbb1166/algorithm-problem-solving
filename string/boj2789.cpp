#include <iostream>
#include <string>
using namespace std;


string word;


int main()
{
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'C' ||
            word[i] == 'A' ||
            word[i] == 'M' ||
            word[i] == 'B' ||
            word[i] == 'R' ||
            word[i] == 'I' ||
            word[i] == 'D' ||
            word[i] == 'G' ||
            word[i] == 'E') {
            word.erase(i, 1);
            i--;
        }
    }

    cout << word << '\n';

    return 0;
}
