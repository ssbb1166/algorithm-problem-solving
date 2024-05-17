#include <cstdio>
using namespace std;


int start[3], finish[3], sec1, sec2, res, hh, mm, ss;


int main()
{
    scanf("%d:%d:%d", &start[0], &start[1], &start[2]);
    scanf("%d:%d:%d", &finish[0], &finish[1], &finish[2]);

    sec1 = start[0] * 3600 + start[1] * 60 + start[2];
    sec2 = finish[0] * 3600 + finish[1] * 60 + finish[2];

    if (sec1 >= sec2) sec2 += 86400;

    res = sec2 - sec1;

    hh = res / 3600;
    mm = res % 3600 / 60;
    ss = res % 60;

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
