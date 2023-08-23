#include <iostream>
#include <string>
using namespace std;


int n, cnt;
string jinho, others;


int main()
{
    cin >> jinho >> n;

    for (int i = 0; i < n; i++) {
        cin >> others;
        if (others == jinho) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
