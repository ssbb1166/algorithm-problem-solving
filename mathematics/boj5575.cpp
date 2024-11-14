#include <iostream>
using namespace std;


int sh, sm, ss, eh, em, es, t;


int main()
{
    for (int i = 0; i < 3; i++) {
        cin >> sh >> sm >> ss >> eh >> em >> es;
        t = (eh * 3600 + em * 60 + es) - (sh * 3600 + sm * 60 + ss);
        cout << t / 3600 << ' ' << t % 3600 / 60 << ' ' << t % 60 << '\n';
    }

    return 0;
}
