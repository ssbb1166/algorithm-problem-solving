#include <iostream>
#include <string>
#include <vector>
using namespace std;


int n, k;
string seq, num;
vector<int> res;


int main()
{
    cin >> n >> k >> seq;

    for (int i = 0; seq[i]; i++) {
        if (seq[i] == ',') {
            res.push_back(stoi(num));
            num = "";
        }
        else {
            num += seq[i];
        }
    }

    res.push_back(stoi(num));

    while (k--) {
        n--;
        for (int i = 0; i < n; i++)
            res[i] = res[i + 1] - res[i];
    }

    for (int i = 0; i < n; i++) {
        cout << res[i];
        if (i < n - 1) cout << ',';
    }

    return 0;
}
