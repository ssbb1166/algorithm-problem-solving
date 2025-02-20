#include <iostream>
using namespace std;


int num, a, b;


int main()
{
    for (int point = 3; point >= 1; point--) {
        cin >> num;
        a += point * num;
    }

    for (int point = 3; point >= 1; point--) {
        cin >> num;
        b += point * num;
    }

    if (a > b)
        cout << 'A';
    else if (a < b)
        cout << 'B';
    else
        cout << 'T';

    return 0;
}
