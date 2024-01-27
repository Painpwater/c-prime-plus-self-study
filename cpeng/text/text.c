#include <stdio.h>

struct stu
{
    char name[20];
    int age;
    char tele[20];

};

int main()
{

    char password[20]={0};

    printf("请输入密码：");
    scanf("%s",password);
    printf("请确认密码（y/n）:");
    //getchar();
    int ch = 0;
    while ((ch=getchar())!='\n')
    {

    }
    
    int ret = getchar();
    if (ret=='y')
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
    return 0;
}