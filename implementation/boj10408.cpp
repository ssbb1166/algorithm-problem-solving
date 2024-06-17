#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


double total;
string s;
vector<int> grades;


int main()
{
    cin >> s;

    for (int i = 0; s[i]; i++) {
        if (s[i] == '1' && s[i + 1] == '0') {
            grades.push_back(10);
            i++;
        }
        else {
            grades.push_back(s[i] - '0');
        }
    }

    for (int grade : grades)
        total += grade;

    cout << fixed << setprecision(2) << total / grades.size();

    return 0;
}
