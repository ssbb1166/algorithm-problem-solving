#include <cmath>
#include <iostream>
#include <string>
using namespace std;


int sum;
string word;


bool IsPrimeNumber(int x)
{
    for (int i = 2; i <= int(sqrt(x)); i++)
        if (x % i == 0) return false;

    return true;
}


int main()
{
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z')
            sum += word[i] - 'a' + 1;
        if (word[i] >= 'A' && word[i] <= 'Z')
            sum += word[i] - 'A' + 27;
    }

    if (IsPrimeNumber(sum))
        cout << "It is a prime word.\n";
    else
        cout << "It is not a prime word.\n";

    return 0;
}
