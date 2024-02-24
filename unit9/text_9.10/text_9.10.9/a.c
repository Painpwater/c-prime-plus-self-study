#include <stdio.h>
void menu(void);
int limit(int max,int min);

int main(void)
{
    int num;
    menu();
    num = limit(4,1);
    printf("num=%d.\n",num);
    switch (num)
    {
    case 1:
        printf("1) copy files\n");
        break;
    case 2:
        printf("2) move files\n");
        break;  
    case 4:
        printf("4) quit\n");
        break;
    default:
        break;
    }
    return 0;
}




void menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files           2) move files\n3) remove files          4) quit\n");
    printf("Enter the number of your choice:");
}

int limit(int max,int min)
{
    int num;
    num = 4;
    while((scanf("%d",&num))==1)
    {
        if(num>max || num<min)
            menu();
        else
            return num;
    }
    return 4;
}