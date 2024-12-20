#include <iostream>
using namespace std;


int n, cnt;


bool Clap(int num)
{
    return num == 3 || num == 6 || num == 9;
}


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num) {
            if (Clap(num % 10)) cnt++;
            num /= 10;
        }
    }

    cout << cnt;

    return 0;
}
