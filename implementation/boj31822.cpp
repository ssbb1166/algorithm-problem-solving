#include <iostream>
#include <string>
using namespace std;


int n, cnt;
string retake, code;


int main()
{
    cin >> retake >> n;

    for (int i = 0; i < n; i++) {
        cin >> code;

        bool flag = true;
        for (int j = 0; j < 5; j++)
            if (code[j] != retake[j])
                flag = false;

        if (flag)
            cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
