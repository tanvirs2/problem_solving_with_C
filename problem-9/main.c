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

    return 0;
}
