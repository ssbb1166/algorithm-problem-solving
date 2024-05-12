#include <iostream>
using namespace std;


int num, max_num = 0, max_pos[2] = { 1, 1 };


int main()
{
    for (int row = 1; row <= 9; row++) {
        for (int col = 1; col <= 9; col++) {
            cin >> num;
            if (num > max_num) {
                max_num = num;
                max_pos[0] = row;
                max_pos[1] = col;
            }
        }
    }

    cout << max_num << '\n';
    cout << max_pos[0] << ' ' << max_pos[1] << '\n';

    return 0;
}
