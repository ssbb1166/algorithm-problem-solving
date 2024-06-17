#include <iostream>
#include <stack>
#include <string>
using namespace std;


int n, cnt;
string word;


int main()
{
    cin >> n;

    while (n--) {
        cin >> word;

        stack<char> st;
        for (char c : word) {
            if (!st.empty() && st.top() == c)
                st.pop();
            else
                st.push(c);
        }

        if (st.empty()) cnt++;
    }

    cout << cnt;

    return 0;
}
