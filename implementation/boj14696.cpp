#include <iostream>
using namespace std;


int n, a, b, shape, cnt_a[5], cnt_b[5];


int main()
{
    cin >> n;

    while (n--) {
        for (int shape = 1; shape <= 4; shape++)
            cnt_a[shape] = cnt_b[shape] = 0;

        cin >> a;
        for (int i = 0; i < a; i++) {
            cin >> shape;
            cnt_a[shape]++;
        }

        cin >> b;
        for (int i = 0; i < b; i++) {
            cin >> shape;
            cnt_b[shape]++;
        }

        if (cnt_a[4] > cnt_b[4])
            cout << 'A' << '\n';
        else if (cnt_a[4] < cnt_b[4])
            cout << 'B' << '\n';
        else if (cnt_a[3] > cnt_b[3])
            cout << 'A' << '\n';
        else if (cnt_a[3] < cnt_b[3])
            cout << 'B' << '\n';
        else if (cnt_a[2] > cnt_b[2])
            cout << 'A' << '\n';
        else if (cnt_a[2] < cnt_b[2])
            cout << 'B' << '\n';
        else if (cnt_a[1] > cnt_b[1])
            cout << 'A' << '\n';
        else if (cnt_a[1] < cnt_b[1])
            cout << 'B' << '\n';
        else
            cout << 'D' << '\n';
    }

    return 0;
}
