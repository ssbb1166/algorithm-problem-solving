#include <iostream>
#include <string>
using namespace std;


int n;
string sentence;


int main()
{
    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, sentence);
        cout << sentence << (sentence.back() == '.' ? "" : ".") << '\n';
    }

    return 0;
}
