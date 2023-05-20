#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string n;


int main()
{
    cin >> n;

    sort(n.begin(), n.end(), greater<>());

    cout << n;

    return 0;
}
