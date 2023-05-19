#include <iostream>
using namespace std;


int t;


int main()
{
    cin >> t;

    if (t % 10 == 0)
        cout << t / 300 << ' ' << t % 300 / 60 << ' ' << t % 60 / 10 << '\n';
    else
        cout << -1 << '\n';
    
    return 0;
}
