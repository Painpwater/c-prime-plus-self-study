#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[30];

    printf("Enter your word:");
    scanf("%s",&word);
    int length;
    length=strlen(word)-1;

    for(length=strlen(word)-1;length>=0;length--)
    {
        printf("%c",word[length]);
    }

    return 0;
}