#include <iostream>
using namespace std;


int n, score, cute;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> score;
        cute += score;
    }

    if (cute <= n / 2)
        cout << "Junhee is not cute!\n";
    else
        cout << "Junhee is cute!\n";

    return 0;
}
