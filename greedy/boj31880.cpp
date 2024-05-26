#include <iostream>
using namespace std;


long long int n, m, a, b, p;


int main()
{
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        p += a;
    }

    for (int i = 0; i < m; i++) {
        cin >> b;
        if (b > 0) p *= b;
    }

    cout << p;

    return 0;
}
