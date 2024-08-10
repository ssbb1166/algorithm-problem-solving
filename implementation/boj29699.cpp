#include <iostream>
#include <string>
using namespace std;


const string label = "WelcomeToSMUPC";
int n;


int main()
{
    cin >> n;
    cout << label[(n - 1) % 14];

    return 0;
}
