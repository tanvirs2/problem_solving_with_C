#include <stdio.h>

int main() {
    int T, totalOver = 50;
    float overDone, runDone, ballDone, hasBall, avgRun, opponentRun, needRunForWin, needRunInOver;

    scanf("%d", &T);

    while (T--) {
        scanf("%f %f %f", &opponentRun, &runDone, &hasBall);
        needRunForWin = 1 + (opponentRun - runDone);
        needRunInOver = needRunForWin / (hasBall / 6);
        ballDone = (totalOver * 6) - hasBall;
        overDone = ballDone / 6;
        avgRun = runDone / overDone;
        if (opponentRun > runDone) {
            printf("%.2f %.2f\n", avgRun, needRunInOver);
        } else {
            printf("%.2f %.2f\n", avgRun, 0.00);
        }
    }

    return 0;
}
