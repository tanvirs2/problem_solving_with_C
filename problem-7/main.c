#include <stdio.h>
#include <string.h>

int main() {

    int T, n_size, sp=0, arrIndex[100], i, yy;

    char n[] = "10 36       669";

    n_size = strlen(n);

    for (i = 0; i < n_size; ++i) {


        if (n[i] == ' ') {

            arrIndex[sp] = i;

            sp++;
        }

    }


    for (int j = 0; j < 100; ++j) {



    }

    //printf("%d", arrIndex[0]);


    //printf("Length of array: %d\n", (int)( sizeof(arrIndex) / sizeof(arrIndex[0]) ));


    return 0;
}
