#include <stdio.h>

int main() {

    int line = 1, num = 1;


    scanf("%d", &line);

    if (line > 10) {
        printf("input line should be less or equal to = 10: \n\n");

        return 0;
    }


    for (int i = 1; i <= line; ++i) {

        //printf("Input :");

        scanf(" %d", &num);

        if (num > 100000) {

            printf("input number should be less or equal to = 100000: \n\n");

            return 0;
        }
        if (num < 0) {

            printf("input number should be greater than = 0: \n\n");

            return 0;
        }


        printf("Case %d:", i);

        for (int j = 1; j <= num; ++j) {

            if (num % j == 0) {
                printf(" %d", j);
            }

        }

        printf("\n");

    }


    return 0;
}
