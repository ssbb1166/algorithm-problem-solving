#include <iostream>
#include <string>
using namespace std;


string n;
bool same;
int len, front_num, back_num;


int main()
{
    cin >> n;

    len = n.length();

    for (int pivot = 1; pivot < len; pivot++) {
        front_num = back_num = 1;

        for (int i = 0; i < pivot; i++)
            front_num *= n[i] - '0';

        for (int i = pivot; i < len; i++)
            back_num *= n[i] - '0';

        if (front_num == back_num)
            same = true;
    }

    cout << (same ? "YES" : "NO");

    return 0;
}
