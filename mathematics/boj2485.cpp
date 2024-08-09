#include <iostream>
using namespace std;


int n, divisor, cnt, dist[100000];


int GCD(int a, int b)
{
    while (b > 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> dist[i];

    for (int i = 0; i < n - 1; i++)
        dist[i] = dist[i + 1] - dist[i];

    divisor = dist[0];
    for (int i = 1; i < n - 1; i++)
        divisor = GCD(divisor, dist[i]);

    for (int i = 0; i < n - 1; i++)
        cnt += dist[i] / divisor - 1;

    cout << cnt;

    return 0;
}
