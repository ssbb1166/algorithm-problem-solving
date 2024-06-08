#include <algorithm>
#include <iostream>
using namespace std;


int height[9], sum;


void PrintHeight()
{
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (height[i] + height[j] == sum - 100) {
                for (int k = 0; k < 9; k++)
                    if (k != i && k != j)
                        cout << height[k] << '\n';
                return;
            }
        }
    }
}


int main()
{
    for (int i = 0; i < 9; i++) {
        cin >> height[i];
        sum += height[i];
    }

    sort(height, height + 9);

    PrintHeight();

    return 0;
}
