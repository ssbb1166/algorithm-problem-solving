#include <iostream>
#include <stack>
using namespace std;


int n, num, cnt = 1;
stack<int> st;
string res;


int main()
{
    cin >> n;

    while (n--) {
        cin >> num;

        while (cnt <= num) {
            st.push(cnt++);
            res += "+\n";
        }

        if (st.top() == num) {
            st.pop();
            res += "-\n";
        }
    }

    if (st.empty())
        cout << res;
    else
        cout << "NO";

    return 0;
}
