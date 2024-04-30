#include <iostream>
using namespace std;


int n, seq[8];
bool visited[8];


void FindSequence(int cnt)
{
    if (cnt == n) {
        for (int i = 0; i < n; i++)
            cout << seq[i] << ' ';
        cout << '\n';
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
    cin >> n;

    FindSequence(0);

    return 0;
}
