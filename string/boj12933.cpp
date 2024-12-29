#include <iostream>
#include <string>
using namespace std;


int cnt[5];
bool wrong;
string sounds;


int main()
{
    cin >> sounds;

    for (char sound : sounds) {
        switch (sound) {
        case 'q':
            if (cnt[4] > 0) cnt[4]--;
            cnt[0]++;
            break;
        case 'u':
            if (cnt[0] > 0) cnt[0]--;
            else wrong = true;
            cnt[1]++;
            break;
        case 'a':
            if (cnt[1] > 0) cnt[1]--;
            else wrong = true;
            cnt[2]++;
            break;
        case 'c':
            if (cnt[2] > 0) cnt[2]--;
            else wrong = true;
            cnt[3]++;
            break;
        case 'k':
            if (cnt[3] > 0) cnt[3]--;
            else wrong = true;
            cnt[4]++;
            break;
        }
    }

    for (int i = 0; i < 4; i++)
        if (cnt[i] > 0)
            wrong = true;

    cout << (!wrong ? cnt[4] : -1);

    return 0;
}
