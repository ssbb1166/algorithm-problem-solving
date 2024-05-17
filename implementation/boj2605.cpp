#include <iostream>
using namespace std;


int n, num, seq[101];


int main()
{
    cin >> n;

    for (int student = 1; student <= n; student++) {
        cin >> num;

        for (int i = student; i > student - num; i--)
            seq[i] = seq[i - 1];

        seq[student - num] = student;
    }

    for (int i = 1; i <= n; i++)
        cout << seq[i] << ' ';
    cout << '\n';

    return 0;
}
