#include <iostream>
#include <string>
using namespace std;


string word;


int main()
{
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'D')
            word[i] -= 3;
        else
            word[i] += 23;
    }

    cout << word << '\n';

    return 0;
}
