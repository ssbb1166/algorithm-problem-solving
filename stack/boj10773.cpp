#include <iostream>
#include <stack>
using namespace std;


int k, num, sum;
stack<int> st;


int main()
{
    cin >> k;

    while (k--) {
        cin >> num;
        if (num == 0)
            st.pop();
        else
            st.push(num);
    }

    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }

    cout << sum;

    return 0;
}
