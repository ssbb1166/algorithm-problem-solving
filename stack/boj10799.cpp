#include <iostream>
#include <stack>
#include <string>
using namespace std;


int cnt;
string arr;
stack<char> st;


int main()
{
    cin >> arr;

    for (int i = 0; arr[i]; i++) {
        if (arr[i] == '(') {
            st.push('(');
        }
        else {
            st.pop();
            if (arr[i - 1] == '(')
                cnt += st.size();
            else
                cnt++;
        }
    }

    cout << cnt;

    return 0;
}
