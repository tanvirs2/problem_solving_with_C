#include <stdio.h>


int main() {

    int m=0;

    for (int i = 1000; i > 0; i--) {


        printf("%d\t", i);

        if (i % 5 == 1) {
            printf("\n");
        }

    }

    return 0;
}
