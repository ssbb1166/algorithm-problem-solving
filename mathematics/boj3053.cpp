#include <iostream>
#define PI 3.14159265358979323846
using namespace std;


double r;


int main()
{
    cin >> r;
    
    cout << fixed;
    cout.precision(4);

    cout << PI * r * r << '\n';
    cout << 2 * r * r << '\n';

    return 0;
}
