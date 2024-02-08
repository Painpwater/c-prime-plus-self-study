// 使用循环处理数组
#include <stdio.h>
#define SIZE 10
#define PAR 72

/*
int main(void)
{
    int index,score[SIZE];
    int sum = 0;
    float average;

    printf("Please enter %d golf scores:\n",SIZE);
    for(index = 0;index<SIZE; index++)
    {
        scanf("%d",&score[index]);                      // 读取十个分数
    }
    printf("The scores read in are as follows:\n");     // 读入的分数如下
    for(index = 0;index<SIZE; index ++)
    {
        printf("%5d",score[index]);                      // 验证输入
    }
    printf("\n");
    for(index = 0; index <SIZE; index++)
    {
        sum +=score[index];                             // 求和
    }
    average = (float)sum / SIZE;                               // 求平均数
    printf("Sum of scores = %d,avrage = %.2f,handdcap = %.2f.\n",
            sum,average,average-PAR);

    return 0;

}
*/
int main(void)
{
    int index,score[SIZE];
    int sum = 0;
    float average;

    printf("Please enter %d golf scores:\n",SIZE);
    for(index = 0;index<SIZE; index++)
    {
        scanf("%d",&score[index]);                      // 读取十个分数
    }
    printf("The scores read in are as follows:\n");     // 读入的分数如下
    for(index = 0;index<SIZE; index ++)
    {
        printf("%5d",score[index]);   
        sum +=score[index];                      
    }
    printf("\n");
    average = (float)sum / SIZE;                               // 求平均数
    printf("Sum of scores = %d,avrage = %.2f,handdcap = %.2f.\n",
            sum,average,average-PAR);

    return 0;

}