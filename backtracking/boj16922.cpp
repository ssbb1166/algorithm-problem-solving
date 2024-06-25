#include <iostream>
using namespace std;


int n, res, num[4] = { 1, 5, 10, 50 };
bool visited[1001];


void FindSequence(int idx, int cnt, int sum)
{
    if (cnt == n) {
        if (!visited[sum]) {
            visited[sum] = true;
            res++;
        }
        return;
    }

    for (int i = idx; i < 4; i++)
        FindSequence(i, cnt + 1, sum + num[i]);
}


int main()
{
    cin >> n;

    FindSequence(0, 0, 0);

    cout << res;

    return 0;
}
