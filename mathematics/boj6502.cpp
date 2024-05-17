#include <iostream>
using namespace std;


int r, w, l, i = 1;


int main()
{
    while (1) {
        cin >> r;

        if (r == 0) break;

        cin >> w >> l;

        if (w * w + l * l <= 4 * r * r)
            cout << "Pizza " << i << " fits on the table.\n";
        else
            cout << "Pizza " << i << " does not fit on the table.\n";

        i++;
    }

    return 0;
}
