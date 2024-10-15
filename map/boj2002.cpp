#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int n, cnt, out[1000];
string num;
unordered_map<string, int> order;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        order[num] = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> num;
        out[i] = order[num];
    }

    for (int i = 0; i < n; i++) {
        bool overtake = false;
        for (int j = i + 1; j < n; j++)
            if (out[i] > out[j])
                overtake = true;
        cnt += overtake;
    }

    cout << cnt;

    return 0;
}
