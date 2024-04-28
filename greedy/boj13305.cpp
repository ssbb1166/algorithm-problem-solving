#include <iostream>
using namespace std;


int n, dist[100000], cost[100000];
long long int min_cost, res;


int main()
{
    cin >> n;

    for (int i = 1; i < n; i++)
        cin >> dist[i];

    for (int i = 0; i < n; i++)
        cin >> cost[i];

    min_cost = cost[0];
    for (int i = 1; i < n; i++) {
        res += min_cost * dist[i];
        if (cost[i] < min_cost)
            min_cost = cost[i];
    }

    cout << res << '\n';

    return 0;
}
