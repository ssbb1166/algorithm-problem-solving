#include <iostream>
#include <string>
using namespace std;


string s;


int main()
{
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'A' + (s[i] - 'A' + 13) % 26;
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = 'a' + (s[i] - 'a' + 13) % 26;
    }

    cout << s << '\n';

    return 0;
}
