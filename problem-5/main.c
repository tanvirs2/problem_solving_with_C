#include <stdio.h>

int main() {

    int T = 0, line;

    scanf("%d", &line);

    for (int k = 1; k <= line; k++) {

        scanf("%d", &T);

        for (int i = 1; i <= T; ++i) {

            for (int j = 0; j < T-1; ++j) {
                printf("*");
            }

            printf("*\n");

        }

        if (line > k) {
            printf("\n");
        }

    }

    return 0;
}
