#include <iostream>
using namespace std;


int gamma;


int main()
{
    cin >> gamma;

    if (gamma >= 620)
        cout << "Red" << '\n';
    else if (gamma >= 590)
        cout << "Orange" << '\n';
    else if (gamma >= 570)
        cout << "Yellow" << '\n';
    else if (gamma >= 495)
        cout << "Green" << '\n';
    else if (gamma >= 450)
        cout << "Blue" << '\n';
    else if (gamma >= 425)
        cout << "Indigo" << '\n';
    else
        cout << "Violet" << '\n';

    return 0;
}
