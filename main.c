#include <stdio.h>


int oddEven(){

    int T, i, n;


    scanf("%d", &T);

    for (i = 0; i < T; i++) {

        scanf("%d", &n);

        if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

}

int oddEvenWith100(){

    int T, i;

    char n[100];


    printf("type total line : ");

    scanf("%d", &T);

    for (i = 0; i < T; i++) {

        scanf("%s", &n);

        printf("%c\n", n[10]);

    }

}


int length(int *p)
{
    int s = 0;
    while(*p != '\0')
    {
        s++;
        p++;

        printf("%d\n", p);
    }
    return s;
}

int main() {

    int A[100] = {1,2,4};
    length(&A[0]);
    //printf("Last Element: %d",length(&A[0]));
    //printf("Last Element: %d",A[length(&A[0])-1]);
    return 0;
}


