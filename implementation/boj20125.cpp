#include <iostream>
#include <string>
using namespace std;


int n, head_x, head_y, heart_x, heart_y, left_arm, right_arm, left_leg, right_leg, waist;
string line;


int main()
{
    cin >> n;

    for (int x = 1; x <= n; x++) {
        cin >> line;
        for (int y = 1; y <= n; y++) {
            if (line[y - 1] == '_') continue;

            if (head_x == 0)
                head_x = x, head_y = y;
            else if (x == head_x + 1 && y == head_y)
                heart_x = x, heart_y = y;
            else if (x == head_x + 1 && y < head_y)
                left_arm++;
            else if (x == head_x + 1 && y > head_y)
                right_arm++;
            else if (x > heart_x && y < heart_y)
                left_leg++;
            else if (x > heart_x && y > heart_y)
                right_leg++;
            else
                waist++;
        }
    }

    cout << heart_x << ' ' << heart_y << '\n';
    cout << left_arm << ' ' << right_arm << ' ' << waist << ' ' << left_leg << ' ' << right_leg;

    return 0;
}
