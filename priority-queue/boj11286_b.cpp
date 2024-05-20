#include <iostream>
#include <queue>
using namespace std;


class Compare {
public:
    bool operator()(int x, int y) {
        if (abs(x) == abs(y))
            return x > y;
        return abs(x) > abs(y);
    }
};


int n, x, sign;
priority_queue<int, vector<int>, Compare> pq;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x != 0) {
            pq.push(x);
        }
        else if (pq.empty()) {
            cout << 0 << '\n';
        }
        else {
            cout << pq.top() << '\n';
            pq.pop();
        }
    }

    return 0;
}
