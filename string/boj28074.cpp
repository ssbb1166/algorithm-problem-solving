#include <iostream>
#include <string>
using namespace std;


string s;
int alphabet[26];


int main()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++)
        alphabet[s[i] - 'A']++;

    if (alphabet['M' - 'A'] &&
        alphabet['O' - 'A'] &&
        alphabet['B' - 'A'] &&
        alphabet['I' - 'A'] &&
        alphabet['S' - 'A'])
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}
