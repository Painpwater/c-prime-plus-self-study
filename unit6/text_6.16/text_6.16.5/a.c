#include <stdio.h>

int main(void)
{
    int row,count,rows;
    char ch = 'A';
    char ch1;
    //printf("Enter a zm:");
    //scanf("%c",&ch1);
    ch1='E';
    rows=ch1-ch+1;                                          //  5(总行)
    
    
    for(row = 1;row<=rows;row++)
    {
        for(count=rows-row;count>0;count--)                 // 打印空格
        {
            printf("%c",'\40');
        }
        for(ch='A';ch<='A'+row-1;ch++)                      // 升序打印字母
        {
            printf("%c",ch);
        }
        for(ch='A'+row-2;ch>='A';ch--)                      // 降序打印字母
        {
            printf("%c",ch);
        }
        printf("\n");                                       // 换行
    }   

    return 0;
}
 /*
 for(ch='A';ch<='A'-1+row;ch++)
        {
            printf("%c",ch);
        }
        printf("\n");
        */