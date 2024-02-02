//名 和姓
#include <stdio.h>

int main(void)
{   
    char first_name[10],last_name[30];
    printf("Enter your first name and last name:");
    scanf("%s %s",first_name,last_name);
    printf("Your name is %s,%s.\n",first_name,last_name);

    return 0;
}