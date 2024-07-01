#include <iostream>
#include <string>
using namespace std;


int n, x;
string str;


int main()
{
    cin >> n >> x;

    int value = 1;
    while (n > 0) {
        if (value + (n - 1) * 26 >= x) {
            str += value + 'A' - 1;
            x -= value;
            n--;
        }
        else {
            value++;
        }
        if (value > 26)
            break;
    }

    cout << (x == 0 ? str : "!");

    return 0;
}
