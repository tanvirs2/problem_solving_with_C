#include <stdio.h>

int main() {

    long long n, store = 1, count=0;

    n = 20;

    for (int i = 1; i <= n; ++i) {

        store = store * i;

    }

    while (store % 10 == 0) {
        count++;
        store = store / 10;
        printf(" %lld ", store);
    }


    printf("%lld", count);

    return 0;
}
