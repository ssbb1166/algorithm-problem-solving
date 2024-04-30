#include <iostream>
#include <string>
using namespace std;


int sum;
string s, num;


int main()
{
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',') {
            sum += stoi(num);
            num = "";
        }
        else {
            num += s[i];
        }
    }

    cout << sum + stoi(num) << '\n';

    return 0;
}
