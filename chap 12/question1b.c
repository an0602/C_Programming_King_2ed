#include <stdio.h>

#define N 24

int main(void) {
    char phrase[N];
    int length = 0;
    char *p;

    printf("Enter a message: ");

    for(p = phrase; p < phrase + N; p++)
    {
        scanf("%c", p);
        length++;
    }

    for(p = phrase + length - 1; p >= phrase; p--)
    {
        printf("%c", *p);
    }

    return 0;
}

