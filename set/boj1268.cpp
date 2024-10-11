#include <iostream>
#include <set>
using namespace std;


int n, num, cnt, res, classnum[1001][6];
set<int> students[6][10];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int grade = 1; grade <= 5; grade++) {
            cin >> num;
            classnum[i][grade] = num;
            students[grade][num].insert(i);
        }
    }

    for (int i = 1; i <= n; i++) {
        set<int> classmates;
        for (int grade = 1; grade <= 5; grade++) {
            num = classnum[i][grade];
            for (int student : students[grade][num])
                classmates.insert(student);
        }
        if (classmates.size() > cnt) {
            cnt = classmates.size();
            res = i;
        }
    }

    cout << res;

    return 0;
}
