#include <iostream>
#include <vector>
using namespace std;


int t;
long long month_of_year, day_of_month, day_of_week;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> month_of_year >> day_of_month >> day_of_week;

        long long month_cnt = 0, line_cnt = 0, blank_cnt = 0;
        vector<long long> line_cnt_of_month = { 0 };
        do {
            month_cnt++;
            line_cnt += (blank_cnt + day_of_month) / day_of_week;
            blank_cnt = (blank_cnt + day_of_month) % day_of_week;
            if (blank_cnt > 0) line_cnt++;
            line_cnt_of_month.push_back(line_cnt);
        } while (blank_cnt);

        line_cnt *= month_of_year / month_cnt;
        line_cnt += line_cnt_of_month[month_of_year % month_cnt];

        cout << "Case #" << i << ": " << line_cnt << '\n';
    }

    return 0;
}
