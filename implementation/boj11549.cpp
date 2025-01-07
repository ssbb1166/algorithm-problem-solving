#include <iostream>
using namespace std;


int t, answer, cnt;


int main()
{
    cin >> t;

    for (int i = 0; i < 5; i++) {
        cin >> answer;
        if (answer == t) cnt++;
    }

    cout << cnt;

    return 0;
}
