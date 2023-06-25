#include <iostream>
#include <stack>
#include <string>
using namespace std;


int t;
string sentence;
stack<char> st;


int main()
{
    cin >> t;
    cin.ignore();  // getline 때문에 추가

    for (int i = 0; i < t; i++) {
        getline(cin, sentence);
        sentence += ' ';
        for (int j = 0; j < sentence.size(); j++) {
            if (sentence[j] == ' ') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << ' ';
            }
            else {
                st.push(sentence[j]);
            }
        }
        cout << '\n';
    }

    return 0;
}
