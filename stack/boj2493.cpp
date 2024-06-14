#include <iostream>
#include <stack>
using namespace std;


int n, height;
stack<pair<int, int>> st;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> height;
        while (!st.empty() && height > st.top().first)
            st.pop();
        cout << (!st.empty() ? st.top().second : 0) << ' ';
        st.push({ height, i });
    }

    return 0;
}
