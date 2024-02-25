#include <iostream>
using namespace std;


int t, y, k, y_sum, k_sum;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> y >> k;
            y_sum += y;
            k_sum += k;
        }

        if (y_sum > k_sum)
            cout << "Yonsei" << '\n';
        else if (y_sum < k_sum)
            cout << "Korea" << '\n';
        else
            cout << "Draw" << '\n';
    }

    return 0;
}
