#include <iostream>
#include <set>
#include <string>
using namespace std;


string s;
set<string> substrings;


int main()
{
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        string substring = "";
        for (int j = i; j < s.size(); j++) {
            substring += s[j];
            substrings.insert(substring);
        }
    }

    cout << substrings.size() << '\n';

    return 0;
}
