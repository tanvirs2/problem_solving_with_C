#include <stdio.h>

int main() {

    int T, N, msd, lsd;

    scanf("%d", &T);


    for (int i = 0; i < T; ++i) {

        scanf("%d", &N);

        msd = N % 10;

        while (N > 0) {
            N = N / 10;

            if (N != 0) {
                lsd = N;
            }

        }

        printf("Sum = %d\n", lsd + msd);

    }

    return 0;
}
