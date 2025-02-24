#include <iostream>
using namespace std;


int n, t, num;


int main()
{
    while (true) {
        cin >> n;

        if (n == 0) break;

        while (n--) cin >> num;

        cout << "Case " << ++t << ": Sorting... done!" << '\n';
    }

    return 0;
}
