//
// Created by ayazn on 12/17/2021.
//
#include <stdio.h>
#include <ctype.h>

#define N 50

int main(void)
{
    char phrase[N];
    int length = 0;
    int palindrome_flag = 1;
    int forward_count = 0;
    char c;
    int i;
    char *p;
    printf("Enter a message: ");

    //for(p = phrase; p < phrase + 4 && *p != '\n'; p++)
    while(1)
    {
        c = tolower(getchar());
        if(c == '\n')
            break;

        else if(c != ' ' && c != ',' && c != '.' && c != '?')
        {
            //phrase[length] = c;
            *(phrase + length) = c;
            printf("%c", phrase[length]);
            length++;
        }

    }
    printf("length is: %d\n", length);

    for(i = length - 1; i >= 0; i--)
    {
        //printf("%c", phrase[i]);
        if(phrase[forward_count] != phrase[i])
        {
            //printf("forward phrase is: %c\n", phrase[forward_count]);
            //printf("i phrase is: %c\n", phrase[i]);
            palindrome_flag = 0;
        }
        forward_count++;
    }
    if(palindrome_flag == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}
