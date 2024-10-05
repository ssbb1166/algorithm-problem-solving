#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int h, w, sum, max_idx, max_height, block[500];


int main()
{
    cin >> h >> w;

    for (int i = 0; i < w; i++)
        cin >> block[i];

    max_idx = max_element(block, block + w) - block;
    max_height = *max_element(block, block + w);
    while (max_idx > 0) {
        int lmax_idx = max_element(block, block + max_idx) - block;
        int lmax_height = *max_element(block, block + max_idx);
        for (int i = lmax_idx; i < max_idx; i++)
            sum += lmax_height - block[i];
        max_idx = lmax_idx;
        max_height = lmax_height;
    }

    max_idx = max_element(block, block + w) - block;
    max_height = *max_element(block, block + w);
    while (max_idx < w - 1) {
        int rmax_idx = max_element(block + max_idx + 1, block + w) - block;
        int rmax_height = *max_element(block + max_idx + 1, block + w);
        for (int i = max_idx + 1; i < rmax_idx; i++)
            sum += rmax_height - block[i];
        max_idx = rmax_idx;
        max_height = rmax_height;
    }

    cout << sum;
    
    return 0;
}
