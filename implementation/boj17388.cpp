#include <iostream>
using namespace std;


int s, k, h;


int main()
{
    cin >> s >> k >> h;

    if (s + k + h >= 100)
        cout << "OK" << '\n';
    else {
        if (s < k && s < h)
            cout << "Soongsil" << '\n';
        if (k < s && k < h)
            cout << "Korea" << '\n';
        if (h < s && h < k)
            cout << "Hanyang" << '\n';
    }

    return 0;
}
