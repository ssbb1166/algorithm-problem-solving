#include <iostream>
#include <queue>
using namespace std;


int n, k, up_pos, down_pos, prev_pos, next_pos, step, cnt, a[201];
queue<int> up, down, robot;


void RotateBelt()
{
    // 내리는 위치 칸이 이동한다.
    down.push(up.front());
    up.pop();
    down_pos = up.front();

    // 로봇이 내리는 위치에 도달하면 내린다.
    if (!robot.empty() && robot.front() == down_pos)
        robot.pop();

    // 올리는 위치 칸이 이동한다.
    up_pos = down.front();
    up.push(up_pos);
    down.pop();
}


int GetNextNumber(int num)
{
    if (num == 2 * n) num = 0;
    return num + 1;
}


void MoveRobots()
{
    prev_pos = 0;

    int robot_cnt = robot.size();
    for (int i = 0; i < robot_cnt; i++) {
        // 로봇이 이동할 다음 칸의 위치를 구한다.
        next_pos = GetNextNumber(robot.front());

        if (a[next_pos] > 0 && next_pos == down_pos) {
            // 내구도가 0보다 크고, 다음 칸이 내리는 위치일 경우
            robot.pop();
            a[next_pos]--;
            if (a[next_pos] == 0) cnt++;
        }
        else if (a[next_pos] > 0 && next_pos != prev_pos) {
            // 내구도가 0보다 크고, 다음 칸에 로봇이 없을 경우
            prev_pos = next_pos;
            robot.push(next_pos);
            robot.pop();
            a[next_pos]--;
            if (a[next_pos] == 0) cnt++;
        }
        else {
            // 내구도가 0이거나, 다음 칸에 로봇이 있을 경우
            prev_pos = robot.front();
            robot.push(robot.front());
            robot.pop();
        }
    }
}


void PlaceRobot()
{
    if (a[up_pos] > 0) robot.push(up_pos);

    a[up_pos]--;

    if (a[up_pos] == 0) cnt++;
}


int main()
{
    cin >> n >> k;

    for (int i = 1; i <= 2 * n; i++)
        cin >> a[i];

    for (int i = n; i >= 1; i--)
        up.push(i);

    for (int i = 2 * n; i >= n + 1; i--)
        down.push(i);

    while (cnt < k) {
        RotateBelt();
        MoveRobots();
        PlaceRobot();
        step++;
    }

    cout << step;

    return 0;
}
