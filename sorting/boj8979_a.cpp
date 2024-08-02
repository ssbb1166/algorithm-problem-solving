#include <iostream>
using namespace std;


class Country
{
public:
    int num, medal[3];

    bool operator<(const Country& c) {
        if  (medal[0] == c.medal[0] && medal[1] == c.medal[1])
            return medal[2] > c.medal[2];
        else if (medal[0] == c.medal[0])
            return medal[1] > c.medal[1];
        else
            return medal[0] > c.medal[0];
    }
};


int n, k, ki, ranking = 1;
Country countries[1000];


int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> countries[i].num;
        for (int j = 0; j < 3; j++)
            cin >> countries[i].medal[j];
        if (countries[i].num == k)
            ki = i;
    }

    for (int i = 0; i < n; i++)
        if (countries[i] < countries[ki])
            ranking++;

    cout << ranking;

    return 0;
}
