#include <iostream>
#include <string>
using namespace std;


string word;
int cnt;


int main()
{
    cin >> word;

    for (int i = 0; i < word.length(); i++)
        if (word[i] == 'a' ||
            word[i] == 'e' ||
            word[i] == 'i' ||
            word[i] == 'o' ||
            word[i] == 'u')
            cnt++;

    cout << cnt << '\n';

    return 0;
}
