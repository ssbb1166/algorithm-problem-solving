#include <algorithm>
#include <iostream>
using namespace std;


int sub1[4], sub2[2];


int main()
{
    cin >> sub1[0] >> sub1[1] >> sub1[2] >> sub1[3] >> sub2[0] >> sub2[1];

    sort(sub1, sub1 + 4);
    sort(sub2, sub2 + 2);

    cout << sub1[1] + sub1[2] + sub1[3] + sub2[1];

    return 0;
}
