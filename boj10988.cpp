#include <iostream>
#include <string>
using namespace std;


string word, reverse_word;


int main()
{
    cin >> word;

    for (int i = word.size() - 1; i >= 0; i--)
        reverse_word += word[i];

    if (word == reverse_word)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}
