#include <stdio.h>
#define CM_PER_F 30.48      // 1英尺30.48厘米
#define CM_PER_IN 2.54      // 1英寸2.54厘米

int main(void)
{
    float cm,in;
    int fe;
    
    printf("Enter a height in centimeters: ");
    scanf("%f",&cm);
    while (cm>0)
    {
        fe = (int)cm / (int)CM_PER_F;
        in = (int)cm % (int)CM_PER_F / CM_PER_IN;
        printf("%.1f cm = %d feet, %.1f inches\n",cm,fe,in);
        printf("Enter a height in centimeters(<=0 to qiut): ");
        scanf("%f",&cm);
    }
    printf("Bye\n");

    return 0;
}