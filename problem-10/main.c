#include <stdio.h>

int main() {
    int totalOver = 50, overDone, runDone, ballDone, hasBall, avgRun;

    scanf("%d %d", &runDone, &hasBall);

    ballDone = (totalOver * 6) - hasBall;
    overDone = ballDone / 6;
    avgRun = runDone / overDone;

    printf("%d", avgRun);

    return 0;
}
