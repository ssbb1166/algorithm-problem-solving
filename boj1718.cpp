#include <iostream>
#include <string>
using namespace std;


string text, key;


int main()
{
    getline(cin, text);

    cin >> key;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ')
            text[i] == ' ';
        else if (text[i] - key[i % key.length()] > 0)
            text[i] = text[i] - key[i % key.length()] + 'a' - 1;
        else
            text[i] = text[i] - key[i % key.length()] + 'z';
    }

    cout << text << '\n';

    return 0;
}
