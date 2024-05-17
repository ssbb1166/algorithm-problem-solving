#include <iostream>
using namespace std;


int t, num, even_sum, even_min;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        even_sum = 0;
        even_min = 100;

        for (int j = 0; j < 7; j++) {
            cin >> num;

            if (num % 2 == 0) {
                even_sum += num;
                if (num < even_min)
                    even_min = num;
            }
        }

        cout << even_sum << ' ' << even_min << '\n';
    }

    return 0;
}
