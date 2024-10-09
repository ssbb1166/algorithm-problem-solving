#include <iostream>
using namespace std;


int a, b, c, park, leave, sum, cnt[101];


int main()
{
    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++) {
        cin >> park >> leave;
        for (int t = park; t < leave; t++) cnt[t]++;
    }

    for (int t = 1; t <= 100; t++) {
        if (cnt[t] == 1)
            sum += cnt[t] * a;
        if (cnt[t] == 2)
            sum += cnt[t] * b;
        if (cnt[t] == 3)
            sum += cnt[t] * c;
    }

    cout << sum;

    return 0;
}
