#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int num, sum;
vector<int> odd;


int main()
{
    for (int i = 0; i < 7; i++) {
        cin >> num;
        if (num % 2 == 1) {
            odd.push_back(num);
            sum += num;
        }
    }

    if (odd.size() == 0) {
        cout << -1 << '\n';
    }
    else {
        sort(odd.begin(), odd.end());
        cout << sum << '\n';
        cout << odd[0] << '\n';
    }

    return 0;
}
