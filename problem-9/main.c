#include <stdio.h>

int main() {

    int T, n, sp=0;

    scanf("%d", &T);

    while (T--) {

        scanf("%d", &n);

        for (int i = 0; i < n; ++i) {
            if (i > 0) {

                if (n == i * i) {
                    ++sp;
                }

            }
        }

        if (sp != 0) {
            sp = 0;
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }



    /*int number;

    float temp, sqrt;

    printf("Provide the number: \n");

    scanf("%d", &number);

    // store the half of the given number e.g from 256 => 128
    sqrt = number / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = ( number/temp + temp) / 2;

        printf("The square root of '%d' is '%f' - '%f' \n", number, sqrt, temp);
    }

    //printf("The square root of '%d' is '%f'", number, sqrt);*/

    return 0;
}
