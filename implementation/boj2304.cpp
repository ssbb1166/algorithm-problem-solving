#include <algorithm>
#include <iostream>
using namespace std;


int n, l, h, height[1000];


int GetArea()
{
    int max_idx = max_element(height, height + 1000) - height;
    int max_height = *max_element(height, height + 1000);
    int sum = max_height;

    int e = max_idx - 1;
    while (e >= 0) {
        int max_idx = max_element(height, height + e + 1) - height;
        int max_height = *max_element(height, height + e + 1);
        sum += (e - max_idx + 1) * max_height;
        e = max_idx - 1;
    }

    int s = max_idx + 1;
    while (s <= 999) {
        int max_idx = max_element(height + s, height + 1000) - height;
        int max_height = *max_element(height + s, height + 1000);
        sum += (max_idx - s + 1) * max_height;
        s = max_idx + 1;
    }

    return sum;
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l >> h;
        height[l - 1] = h;
    }

    cout << GetArea();

    return 0;
}
