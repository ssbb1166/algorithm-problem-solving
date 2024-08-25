#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;


int n;


int IsPrime(int n)
{
    if (n == 1) return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;

    return true;
}


int IsPalindrome(int n)
{
    string original = to_string(n);
    string reversed = to_string(n);
    reverse(reversed.begin(), reversed.end());
    return original == reversed;
}


int main()
{
    cin >> n;

    while (!IsPrime(n) || !IsPalindrome(n)) n++;

    cout << n;

    return 0;
}
