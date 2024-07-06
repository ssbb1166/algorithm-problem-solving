#include <string>
#include <vector>
using namespace std;


bool pillar[101][101], beam[101][101];


bool CanBuildPillar(int x, int y)
{
    if (y == 0 || beam[y][x - 1] || beam[y][x] || pillar[y - 1][x])
        return true;

    return false;
}


bool CanBuildBeam(int x, int y)
{
    if (y == 0)
        return false;

    if (pillar[y - 1][x] || pillar[y - 1][x + 1] || (beam[y][x - 1] && beam[y][x + 1]))
        return true;

    return false;
}


bool CanRemovePillar(int x, int y)
{
    pillar[y][x] = false;

    if (pillar[y + 1][x] && !CanBuildPillar(x, y + 1) ||
        beam[y + 1][x - 1] && !CanBuildBeam(x - 1, y + 1) ||
        beam[y + 1][x] && !CanBuildBeam(x, y + 1)) {
        pillar[y][x] = true;
        return false;
    }

    return true;
}


bool CanRemoveBeam(int x, int y)
{
    beam[y][x] = false;

    if (pillar[y][x] && !CanBuildPillar(x, y) ||
        pillar[y][x + 1] && !CanBuildPillar(x + 1, y) ||
        beam[y][x - 1] && !CanBuildBeam(x - 1, y) ||
        beam[y][x + 1] && !CanBuildBeam(x + 1, y)) {
        beam[y][x] = true;
        return false;
    }

    return true;
}


vector<vector<int>> solution(int n, vector<vector<int>> build_frame) {
    vector<vector<int>> answer;

    for (vector<int> cmd : build_frame) {
        int x = cmd[0], y = cmd[1], a = cmd[2], b = cmd[3];
        if (a == 0 && b == 0 && CanRemovePillar(x, y))
            pillar[y][x] = false;
        else if (a == 0 && b == 1 && CanBuildPillar(x, y))
            pillar[y][x] = true;
        else if (a == 1 && b == 0 && CanRemoveBeam(x, y))
            beam[y][x] = false;
        else if (a == 1 && b == 1 && CanBuildBeam(x, y))
            beam[y][x] = true;
    }

    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n; y++) {
            if (pillar[y][x]) {
                vector<int> res = { x, y };
                res.push_back(0);
                answer.push_back(res);
            }
            if (beam[y][x]) {
                vector<int> res = { x, y };
                res.push_back(1);
                answer.push_back(res);
            }
        }
    }

    return answer;
}
