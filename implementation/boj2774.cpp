#include <iostream>
#include <string>
using namespace std;


int t, res, cnt[10];
string x;


void Initialize()
{
    res = 0;
    for (int digit = 0; digit <= 9; digit++)
        cnt[digit] = 0;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> x;
        
        Initialize();

        for (char digit : x)
            cnt[digit - '0']++;

        for (int digit = 0; digit <= 9; digit++)
            if (cnt[digit]) res++;

        cout << res << '\n';
    }

    return 0;
}
