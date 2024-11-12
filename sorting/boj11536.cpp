#include <iostream>
#include <string>
using namespace std;


int n;
string prev_name, name;
bool increasing, decreasing;


int main()
{
    cin >> n >> prev_name;

    for (int i = 1; i < n; i++) {
        cin >> name;
        if (name > prev_name) increasing = true;
        if (name < prev_name) decreasing = true;
        prev_name = name;
    }

    if (increasing && !decreasing)
        cout << "INCREASING";
    else if (!increasing && decreasing)
        cout << "DECREASING";
    else
        cout << "NEITHER";

    return 0;
}
