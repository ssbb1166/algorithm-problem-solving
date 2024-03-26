#include <iostream>
#include <string>
using namespace std;


string password;


bool IsVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


int main()
{
    while (cin >> password) {
        if (password == "end")
            break;

        int cnt_vowel = 0, cnt_consonant = 0;
        bool has_vowel = false, is_acceptable = true;
        for (int i = 0; i < password.length(); i++) {
            if (IsVowel(password[i])) {
                cnt_vowel++;
                cnt_consonant = 0;
                has_vowel = true;
            }
            else {
                cnt_consonant++;
                cnt_vowel = 0;
            }

            if (cnt_vowel == 3 || cnt_consonant == 3)
                is_acceptable = false;

            if (i > 0 && password[i] == password[i - 1] &&
                password[i] != 'e' && password[i] != 'o')
                is_acceptable = false;
        }

        if (has_vowel && is_acceptable)
            cout << "<" << password << "> is acceptable.\n";
        else
            cout << "<" << password << "> is not acceptable.\n";
    }

    return 0;
}
