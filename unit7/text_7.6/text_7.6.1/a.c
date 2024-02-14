// 使用continue 跳过部分循环
#include <stdio.h>

int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n =0;
    float min = MAX;
    float max= MIN;

    printf("Enter the first score (qto quit):");
    while(scanf("%f",&score)==1)
    {
        if(score<MIN || score>MAX)
        {
            printf("%.1f is an invalid value.Try again:",score);
            continue;
        }
        printf("Accepting %.1f.\n",score);
        min = (score<min) ? score : min;                // 先赋min最大值，再取最小值；
        max = (score>max) ? score : max;                // 同理，取最大值；
        total += score;
        n++;
        printf("Enter next score (q to quit):");
    }
    if (n>0)
    {
        printf("Average of %d scores is %.1f.\n",n,total/n);
        printf("Low = %.1f,high = %.1f",min,max);
    }
    else
        printf("No valid scores were entered.\n");

    return 0;
}