#include <iostream>
#include <string>
using namespace std;


string sentence;


int main()
{
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        cout << sentence[i];
        if (sentence[i] == 'a' ||
            sentence[i] == 'e' ||
            sentence[i] == 'i' ||
            sentence[i] == 'o' ||
            sentence[i] == 'u')
            i += 2;
    }

    return 0;
}
