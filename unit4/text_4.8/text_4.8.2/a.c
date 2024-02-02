#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    int num;
    
    printf("Enter your name:");
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("%20s\n",name);
    printf("%-20s\n",name);
    num = strlen(name)+3;
    printf("%*s",num,name);

    return 0;
}