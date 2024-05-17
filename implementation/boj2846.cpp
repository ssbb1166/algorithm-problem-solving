#include <iostream>
using namespace std;


int n, p, init_p, prev_p, height, max_height;


int main()
{
    cin >> n >> init_p;

    prev_p = init_p;
    for (int i = 1; i < n; i++) {
        cin >> p;
        if (prev_p < p) {
            height = p - init_p;
            if (height > max_height)
                max_height = height;
            prev_p = p;
        }
        else {
            prev_p = init_p = p;
        }
    }

    cout << max_height << '\n';

    return 0;
}
