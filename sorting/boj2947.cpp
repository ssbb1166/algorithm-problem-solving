#include <algorithm>
#include <iostream>
using namespace std;


int num[5];


int main()
{
    for (int i = 0; i < 5; i++)
        cin >> num[i];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (num[j] > num[j + 1]) {
                swap(num[j], num[j + 1]);
                for (int k = 0; k < 5; k++)
                    cout << num[k] << ' ';
                cout << '\n';
            }
        }
    }

    return 0;
}
