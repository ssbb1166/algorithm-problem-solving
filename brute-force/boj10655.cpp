#include <cstdlib>
#include <iostream>
using namespace std;


int n, sum, skip, prev_dist, curr_dist, skip_dist, x[100000], y[100000];


int main()
{
    cin >> n;

    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];

    sum = prev_dist = abs(x[1] - x[0]) + abs(y[1] - y[0]);

    for (int i = 2; i < n; i++) {
        cin >> x[i] >> y[i];

        curr_dist = abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]);
        skip_dist = abs(x[i] - x[i - 2]) + abs(y[i] - y[i - 2]);
        skip = max(skip, prev_dist + curr_dist - skip_dist);

        sum += curr_dist;
        prev_dist = curr_dist;
    }

    cout << sum - skip;

    return 0;
}
