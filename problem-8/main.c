#include <stdio.h>

int main() {

    int num[] = {3, 5, 2, 8, 4, 9}, arrSize;

    arrSize = (int) sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < arrSize; ++i) {

        for (int j = 0; j < arrSize - i; ++j) {

            if (num[j] > num[j + 1]) {

                int b = num[j];

                num[j] = num[j + 1];

                num[j + 1] = b;
            }

        }

    }

    for (int i = 0; i < (int)sizeof(num)/ sizeof(num[0]); ++i) {

        printf("%d ", num[i]);

    }

    return 0;
}
