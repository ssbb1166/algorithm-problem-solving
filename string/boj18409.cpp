#include <iostream>
#include <string>
using namespace std;


int n, cnt;
string s;


int main()
{
    cin >> n >> s;

    for (char c : s)
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
            cnt++;

    cout << cnt;

    return 0;
}
