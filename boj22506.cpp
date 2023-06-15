#include <iostream>
#include <string>
using namespace std;


string subject, grade;
double credit, point, sum, cnt;
double score[] = { 4, 3, 2, 1 };


int main()
{
    for (int i = 0; i < 20; i++) {
        cin >> subject >> credit >> grade;

        if (grade == "P") continue;

        if (grade == "F") {
            point = 0;
        }
        else {
            point = score[grade[0] - 'A'];
            if (grade[1] == '+') point += 0.5;
        }

        sum += credit * point;
        cnt += credit;
    }

    cout << sum / cnt << '\n';

    return 0;
}
