#include <iostream>
#include <string>
using namespace std;


int n;
string sentence;


int main()
{
    cin >> n;
    cin.ignore();  // getline 때문에 추가

    for (int i = 1; i <= n; i++) {
        getline(cin, sentence);
        cout << i << ". " << sentence << '\n';
    }

    return 0;
}
