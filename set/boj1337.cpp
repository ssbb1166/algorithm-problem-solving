#include <algorithm>
#include <iostream>
#include <unordered_set>
using namespace std;


int n, cnt, res = 5, arr[50];
unordered_set<int> exists;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        exists.insert(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < 5; j++)
            if (exists.find(arr[i] + j) == exists.end())
                cnt++;
        res = min(cnt, res);
    }

    cout << res;

    return 0;
}
