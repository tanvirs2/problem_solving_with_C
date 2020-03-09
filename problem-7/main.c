#include <stdio.h>
#include <string.h>

int main() {

<<<<<<< HEAD
    int T, n_size, sp=0, arrIndex[100], i, yy;

    char n[] = "10 36       669";

    n_size = strlen(n);

    for (i = 0; i < n_size; ++i) {
=======
    char n[] = "1  2";

    int sprint = 0;

    for (int i = 0; i < strlen(n); ++i) {

>>>>>>> 69a26156d1f5b94104a4dbe5ee897510eea1679d

        while (n[i] == ' ') {
            ++i;

<<<<<<< HEAD
        if (n[i] == ' ') {

            arrIndex[sp] = i;

            sp++;
        }

    }


    for (int j = 0; j < 100; ++j) {
=======
            sprint++;
        }

        /*if (n[i] == ' ') {
            sprint++;
        }*/
>>>>>>> 69a26156d1f5b94104a4dbe5ee897510eea1679d

    }

<<<<<<< HEAD

    }

    //printf("%d", arrIndex[0]);


    //printf("Length of array: %d\n", (int)( sizeof(arrIndex) / sizeof(arrIndex[0]) ));


=======
    if (n[strlen(n)-1] == ' ') {
        printf("a %d ", sprint);
    } else {
        printf("b %d ", ++sprint);
    }

>>>>>>> 69a26156d1f5b94104a4dbe5ee897510eea1679d
    return 0;
}
