#include <iostream>
using namespace std;


int n, k, medal[1001][3];


int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int num, gold, silver, bronze;
        cin >> num >> gold >> silver >> bronze;
        medal[num][0] = gold;
        medal[num][1] = silver;
        medal[num][2] = bronze;
    }

    int ranking = 1;
    for (int num = 1; num <= n; num++) {
        if (medal[num][0] > medal[k][0]) ranking++;
        if (medal[num][0] == medal[k][0] && medal[num][1] > medal[k][1]) ranking++;
        if (medal[num][0] == medal[k][0] && medal[num][1] == medal[k][1] && medal[num][2] > medal[k][2]) ranking++;
    }

    cout << ranking;

    return 0;
}
