#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string sentence;


int main()
{
    while (1) {
        getline(cin, sentence);

        if (sentence == "***") break;

        reverse(sentence.begin(), sentence.end());

        cout << sentence << '\n';
    }

    return 0;
}
