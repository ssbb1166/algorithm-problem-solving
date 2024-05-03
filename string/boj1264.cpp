#include <iostream>
#include <string>
using namespace std;


int cnt;
string sentence;


int main()
{
    while (1) {
        getline(cin, sentence);

        if (sentence == "#") break;

        cnt = 0;
        for (int i = 0; i < sentence.size(); i++)
            if (sentence[i] == 'A' || sentence[i] == 'a' ||
                sentence[i] == 'E' || sentence[i] == 'e' ||
                sentence[i] == 'I' || sentence[i] == 'i' ||
                sentence[i] == 'O' || sentence[i] == 'o' ||
                sentence[i] == 'U' || sentence[i] == 'u' )
                cnt++;

        cout << cnt << '\n';
    }

    return 0;
}
