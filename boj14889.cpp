#include <cstdlib>
#include <iostream>
using namespace std;


int n, s[21][21], visited[21];
int start, link, diff = 10000;


void Calculate(int cnt, int idx)
{
    if (cnt == n / 2) {
        start = link = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (visited[i] && visited[j])
                    start += s[i][j];
                if (!visited[i] && !visited[j])
                    link += s[i][j];
            }
        }

        if (abs(start - link) < diff)
            diff = abs(start - link);
        
        return;
    }

    for (int i = idx; i <= n; i++) {
        visited[i] = true;
        Calculate(cnt + 1, i + 1);
        visited[i] = false;
    }
}


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> s[i][j];

    Calculate(0, 1);

    cout << diff << '\n';

    return 0;
}
