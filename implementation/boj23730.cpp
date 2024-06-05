#include <iostream>
using namespace std;


int n, m, number, answer[100001], yunee[100002];


int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> answer[i];

    for (int i = 1; i <= m; i++) {
        cin >> number;
        yunee[number] = answer[number];
    }

    for (int i = 1; i <= n; i++) {
        for (int choice = 1; choice <= 5; choice++) {
            if (!yunee[i] && yunee[i - 1] != choice && yunee[i + 1] != choice && answer[i] != choice) {
                yunee[i] = choice;
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << yunee[i] << ' ';

    return 0;
}
