#include <iostream>
#include <string>
using namespace std;


int sum;
string n;


int main()
{
    cin >> n;

    int s = 0, e = n.length() - 1;
    while (s < e) {
        sum += n[s++] - '0';
        sum -= n[e--] - '0';
    }

    cout << (sum == 0 ? "LUCKY" : "READY");

    return 0;
}
