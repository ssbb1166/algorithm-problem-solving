#include <iostream>
#include <string>
using namespace std;


int n, cnt;
string sentence, promises[] = {
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around and desert you",
    "Never gonna make you cry",
    "Never gonna say goodbye",
    "Never gonna tell a lie and hurt you",
    "Never gonna stop"
};


int main()
{
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        getline(cin, sentence);
        for (string promise : promises)
            if (sentence == promise) cnt++;
    }

    cout << (cnt == n ? "No" : "Yes");

    return 0;
}
