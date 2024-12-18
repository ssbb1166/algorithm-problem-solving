#include <iostream>
using namespace std;


int n, store, idx, cnt;


int main()
{
    cin >> n;

    while (n--) {
        cin >> store;

        if (store == idx) {
            cnt++;
            idx = (idx + 1) % 3;
        }
    }

    cout << cnt;

    return 0;
}
