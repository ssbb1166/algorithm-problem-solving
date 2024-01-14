#include <iostream>
#include <string>
using namespace std;


int doclen, wordlen, cnt;
string doc, word;


int main()
{
    getline(cin, doc);
    getline(cin, word);

    doclen = doc.length();
    wordlen = word.length();

    for (int i = 0; i <= doclen - wordlen; i++) {
        string tmp = doc.substr(i, wordlen);
        if (tmp == word) {
            cnt++;
            i += wordlen -1;
        }
    }

    cout << cnt << '\n';

    return 0;
}
