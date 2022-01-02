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

    printf("Enter a message: ");

    for(i = 0; i < N && c != '\n'; i++)
    {
        c = tolower(getchar());
        if(c != ' ' && c != ',' && c != '.' && c != '?')
        {
            phrase[length] = c;
            //printf("%c", phrase[length]);
            length++;

        }
    }
    //printf("length is: %d\n", length);

    for(i = length - 2; i >= 0; i--)
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
