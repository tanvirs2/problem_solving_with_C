#include <stdio.h>
#include <string.h>


int main() {

    char n[100], t;
    int m, T, i;

    scanf("%d", &T);


    for (i = 0; i < T; i++) {

        scanf("%s", &n);

        t = n[strlen(n) - 1];

        m = t - '0';

        if (m % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
