#include <iostream>
using namespace std;


int n, l;


void PrintList(int n, int l)
{
    while (l <= 100) {
        if (l % 2 == 0) {
            if (n % l == l / 2) {
                int start = n / l - l / 2 + 1;
                if (start >= 0) {
                    for (int i = 0; i < l; i++)
                        cout << start + i << ' ';
                    return;
                }
                else {
                    cout << -1;
                    return;
                }
            }
        }
        else {
            if (n % l == 0) {
                int start = n / l - l / 2;
                if (start >= 0) {
                    for (int i = 0; i < l; i++)
                        cout << start + i << ' ';
                    return;
                }
                else {
                    cout << -1;
                    return;
                }
            }
        }
        l++;
    }
    
    cout << -1;
    return;
}


int main()
{
    cin >> n >> l;

    PrintList(n, l);

    return 0;
}
