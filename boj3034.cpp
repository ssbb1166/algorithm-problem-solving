#include <iostream>
using namespace std;


int n, w, h, len;


int main()
{
    cin >> n >> w >> h;

    for (int i = 0; i < n; i++) {
        cin >> len;

        if (len * len <= w * w + h * h)
            cout << "DA" << '\n';
        else
            cout << "NE" << '\n';
    }

    return 0;
}
