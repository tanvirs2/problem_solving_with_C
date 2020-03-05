#include <stdio.h>
#include <string.h>

int main() {

    char n[] = "1  2";

    int sprint = 0;

    for (int i = 0; i < strlen(n); ++i) {


        while (n[i] == ' ') {
            ++i;

            sprint++;
        }

        /*if (n[i] == ' ') {
            sprint++;
        }*/

    }

    if (n[strlen(n)-1] == ' ') {
        printf("a %d ", sprint);
    } else {
        printf("b %d ", ++sprint);
    }

    return 0;
}
