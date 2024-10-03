#include <cstdlib>
#include <iostream>
using namespace std;


int score[10], prev_sum, sum;


int main()
{
    for (int i = 0; i < 10; i++)
        cin >> score[i];

    for (int i = 0; i < 10; i++) {
        prev_sum = sum;
        sum += score[i];
        if (sum > 100) break;
    }

    cout << (abs(prev_sum - 100) < abs(sum - 100) ? prev_sum : sum);

    return 0;
}
