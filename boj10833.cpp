#include <iostream>
using namespace std;


int n, student, apple, rest;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> student >> apple;
        rest += apple - apple / student * student;
    }

    cout << rest << '\n';

    return 0;
}
