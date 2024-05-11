#include <iostream>
#include <string>
using namespace std;


int sum;
string n;


int main()
{
    cin >> n;

    for (int i = 0; i < n.length(); i++)
        if (i < n.length() / 2)
            sum += n[i];
        else
            sum -= n[i];

    if (sum == 0)
        cout << "LUCKY" << '\n';
    else
        cout << "READY" << '\n';

    return 0;
}
