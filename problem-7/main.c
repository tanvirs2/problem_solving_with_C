#include <stdio.h>
#include <string.h>

int main() {

    int T, n_size;
    char n[] = "10 36 669";

    n_size = strlen(n);

    for (int i = 0; i < n_size; ++i) {

        //printf("%c", n[i]);


        if (n[i] == ' ') {
            printf(" 1 ");
        }
    }

    //printf("%d", strlen(n));

    /*scanf("%d", &T);


    for (int i = 0; i < T; ++i) {

    }

    printf("%d\n", T);*/
    return 0;
}
