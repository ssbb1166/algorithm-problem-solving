#include <iostream>
#include <stack>
#include <string>
using namespace std;


int n;
string line, word;


int main()
{
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        stack<string> st;

        getline(cin, line);

        for (int j = 0; j < line.length(); j++) {
            if (line[j] == ' ') {
                st.push(word);
                word.clear();
            }
            else
                word += line[j];
        }
        st.push(word);
        word.clear();

        cout << "Case #" << i << ":";
        while (!st.empty()) {
            cout << ' ' << st.top();
            st.pop();
        }
        cout << '\n';
    }

    return 0;
}
