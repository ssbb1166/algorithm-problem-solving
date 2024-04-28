#include <iostream>
using namespace std;


int a, b, c;


int main()
{
    cin >> a >> b >> c;

    if (a + b + c != 180)
        cout << "Error" << '\n';
    else if (a == b && b == c)
        cout << "Equilateral" << '\n';
    else if (a == b || b == c || c == a)
        cout << "Isosceles" << '\n';
    else
        cout << "Scalene" << '\n';

    return 0;
}
