#include <iostream>
#include <string>
#include <vector>
using namespace std;


const int FINISH_TIME = 2880;
int n, team, currtime, score[3], wintime[3];
string goaltime, minute, second;
vector<int> goaltimes;


string TimeFormat(int t)
{
    return t < 10 ? "0" + to_string(t) : to_string(t);
}


int main()
{
    cin >> n;

    while (n--) {
        cin >> team >> goaltime;

        minute = "";
        minute += goaltime[0];
        minute += goaltime[1];

        second = "";
        second += goaltime[3];
        second += goaltime[4];

        currtime = stoi(minute) * 60 + stoi(second);

        if (score[1] > score[2])
            wintime[1] += currtime - goaltimes.back();

        if (score[1] < score[2])
            wintime[2] += currtime - goaltimes.back();

        score[team]++;
        goaltimes.push_back(currtime);
    }

    if (score[1] > score[2])
        wintime[1] += FINISH_TIME - goaltimes.back();

    if (score[1] < score[2])
        wintime[2] += FINISH_TIME - goaltimes.back();

    cout << TimeFormat(wintime[1] / 60) << ":" << TimeFormat(wintime[1] % 60) << '\n';
    cout << TimeFormat(wintime[2] / 60) << ":" << TimeFormat(wintime[2] % 60) << '\n';

    return 0;
}
