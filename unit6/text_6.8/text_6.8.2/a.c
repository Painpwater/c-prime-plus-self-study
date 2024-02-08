// while 入口条件循环
#include <stdio.h>

int main(void)
{
    const int secret_num = 13;
    int num_entered;

    printf("To enter the triskaidekaphobia therapy club,\n"); //进入triskaidekaphobia(恐十三)治疗俱乐部
    printf("please enter the secret num:");
    scanf("%d",&num_entered);
    while (num_entered != secret_num)
    {
        printf("please enter the secret num:");
        scanf("%d",&num_entered);
    }

    return 0;
}