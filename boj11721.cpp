#include <iostream>
#include <string>
using namespace std;


string word;


int main()
{
    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        cout << word[i];
        if (i % 10 == 9) cout << '\n';
    }

    return 0;
}
