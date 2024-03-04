#include <iostream>
#include <vector>
using namespace std;


int n, m, seq[8];
bool visited[9];


void FindSequence(int cnt)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            seq[cnt] = i;
            visited[i] = true;
            FindSequence(cnt + 1);
            visited[i] = false;
        }
    }
}


int main()
{
    cin >> n >> m;

    FindSequence(0);

    return 0;
}
