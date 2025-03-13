#include <iostream>
#include <string>
using namespace std;


string str1, str2, str3;


bool IsNumber(string str)
{
    return str[0] >= '0' && str[0] <= '9';
}


string GetFizzBuzz(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
        return "FizzBuzz";
    if (num % 3 == 0)
        return "Fizz";
    if (num % 5 == 0)
        return "Buzz";
    return to_string(num);
}


int main()
{
    cin >> str1 >> str2 >> str3;

    if (IsNumber(str3))
        cout << GetFizzBuzz(stoi(str3) + 1);
    else if (IsNumber(str2))
        cout << GetFizzBuzz(stoi(str2) + 2);
    else
        cout << GetFizzBuzz(stoi(str1) + 3);

    return 0;
}
