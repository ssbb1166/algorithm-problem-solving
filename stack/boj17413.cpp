#include <iostream>
#include <stack>
#include <string>
using namespace std;


string s;
stack<char> st;


void PrintWord()
{
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}


int main()
{
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '<') {
            PrintWord();
            while (s[i] != '>') {
                cout << s[i];
                i++;
            }
            cout << '>';
        }
        else if (s[i] == ' ') {
            PrintWord();
            cout << ' ';
        }
        else {
            st.push(s[i]);
        }
    }

    PrintWord();

    cout << '\n';

    return 0;
}
