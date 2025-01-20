#include <iostream>
#define INF 1e9
using namespace std;


int n, a, b, t = INF;


int main()
{
    cin >> n;

    while (n--) {
        cin >> a >> b;
        if (a <= b) t = min(t, b);
    }

    cout << (t != INF ? t : -1);

    return 0;
}
