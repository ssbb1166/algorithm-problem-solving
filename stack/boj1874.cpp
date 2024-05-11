#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int n, cnt, seq[100000];
stack<int> st;
vector<char> op;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> seq[i];

    for (int num = 1; num <= n; num++) {
        st.push(num);
        op.push_back('+');

        while (!st.empty() && st.top() == seq[cnt]) {
            st.pop();
            op.push_back('-');
            cnt++;
        }
    }

    if (st.empty())
        for (int i = 0; i < op.size(); i++)
            cout << op[i] << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}
