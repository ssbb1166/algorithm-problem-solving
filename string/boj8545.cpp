#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string word;


int main()
{
    cin >> word;

    reverse(word.begin(), word.end());

    cout << word << '\n';

    return 0;
}
