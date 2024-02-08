#include <stdio.h>

int main(void)
{
    char zm[26];
    char ch;
    int count;
    
    for(ch ='a',count=0;ch<='z';count++,ch++)
    {
        zm[count] = ch;        // 存储
    }
    printf("存储完毕。\n");
    for(ch ='a',count=0;ch<='z';count++,ch++)
    {
        printf("%c",zm[count]);       // 输出
    }
    printf("\n输出完毕。\n");

    return 0;
}