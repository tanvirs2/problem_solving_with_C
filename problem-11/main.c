#include <stdio.h>

int main() {
    int T;
    int n, fact=1;

    scanf("%d", &T);

    for (int i = 0; i < T; ++i) {

        scanf("%d", &n);

        for (int j = 1; j <=n; ++j) {
            fact = fact * j;
        }
        printf("%d\n", fact);
        fact = 1;
    }


    return 0;
}
