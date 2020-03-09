#include <stdio.h>

int main() {

    int T, n1, n2, n3, storeVar;

    scanf("%d", &T);

    for (int i = 0; i < T; ++i) {
        scanf("%d %d %d", &n1, &n2, &n3);

        if (n1 > n2) {
            storeVar = n1;
            n1 = n2;
            n2 = storeVar; // n1 = 16, n2 = 91, n3 = 12
        }

        if (n1 > n3) {
            storeVar = n1;
            n1 = n3;
            n3 = storeVar; // n1 = 12, n2 = 91, n3 = 16
        }

        if (n2 > n3) {
            storeVar = n2;
            n2 = n3;
            n3 = storeVar; // n1 = 12, n2 = 16, n3 = 91
        }


        printf("%d %d %d \n", n1, n2, n3);
    }

    return 0;
}
