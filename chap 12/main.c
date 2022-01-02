#include <stdio.h>

#define N 24

int main() {
    char phrase[N];
    int length = 0;
    char c;
    int i;

    printf("Enter a message: ");

    for(i = 0; i < N && c != '\n'; i++)
    {
        c = getchar();
        phrase[i] = c;
        length++;
    }

    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", phrase[i]);
    }

    return 0;
}
