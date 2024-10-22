#include <iostream>
#include <stack>
using namespace std;


int n, a, t, score;
bool recieved;
stack<pair<int, int>> st;


void DoHomework()
{
    st.top().second--;
    if (st.top().second == 0) {
        score += st.top().first;
        st.pop();
    }
}


int main()
{
    cin >> n;

    while (n--) {
        cin >> recieved;

        if (recieved) {
            cin >> a >> t;
            st.push({ a, t });
        }

        if (!st.empty())
            DoHomework();
    }

    cout << score;

    return 0;
}
