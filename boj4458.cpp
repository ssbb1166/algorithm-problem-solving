#include <iostream>
#include <string>
using namespace std;


int n;
string sentence;


int main()
{
    cin >> n;
    cin.ignore();  // getline 때문에 추가

    for (int i = 0; i < n; i++) {
        getline(cin, sentence);
        sentence[0] = toupper(sentence[0]);
        cout << sentence << '\n';
    }

    return 0;
}
