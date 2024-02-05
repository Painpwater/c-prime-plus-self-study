// 自动类型转换
#include <stdio.h>

int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c,i= %d,fl = %.2f\n",ch,i,fl);
    ch= ch +1;
    i = fl +2 *ch;
    fl = 2.0 *ch +i;
    printf("ch = %c,i= %d,fl = %.2f\n",ch,i,fl);
    ch = 1107;                  // 系统自动模256 求最后八位；即1107%256 = 83；对应S
    printf("Now ch = %c\n",ch);
    ch = 80.89;                 // 系统自动截断 即80.89 = 80；对应P
    printf("Now ch = %c\n",ch);

    return 0;
}