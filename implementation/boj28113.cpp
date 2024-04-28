#include <iostream>
#define INF 1000001
using namespace std;


int n, a, b;


int main()
{
    cin >> n >> a >> b;
    
    if (n > b) b = INF;

    if (a < b)
        cout << "Bus" << '\n';
    else if (a > b)
        cout << "Subway" << '\n';
    else
        cout << "Anything" << '\n';

    return 0;
}
