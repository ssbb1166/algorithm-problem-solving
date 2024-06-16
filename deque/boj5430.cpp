#include <deque>
#include <iostream>
#include <string>
using namespace std;


int t, n, x;
bool error, reversed;
string p, arr;
deque<int> dq;


void Parse()
{
    for (int i = 1; arr[i]; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            x *= 10;
            x += arr[i] - '0';
        }
        else if (x > 0) {
            dq.push_back(x);
            x = 0;
        }
    }
}


void PrintResult()
{
    cout << '[';
    if (reversed) {
        while (!dq.empty()) {
            cout << dq.back();
            if (dq.size() > 1) cout << ',';
            dq.pop_back();
        }
    }
    else {
        while (!dq.empty()) {
            cout << dq.front();
            if (dq.size() > 1) cout << ',';
            dq.pop_front();
        }
    }
    cout << ']' << '\n';
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> p >> n >> arr;

        dq.clear();
        error = reversed = false;

        Parse();

        for (int i = 0; p[i]; i++) {
            if (p[i] == 'R')
                reversed ^= true;
            else if (dq.empty())
                error = true;
            else if (reversed)
                dq.pop_back();
            else
                dq.pop_front();
        }

        if (!error)
            PrintResult();
        else
            cout << "error" << '\n';
    }

    return 0;
}
