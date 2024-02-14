#include <stdio.h>

int main(void)
{
    char ch;
    int ch_kg,ch_hh,ch_qt;
    ch_kg= ch_hh =ch_qt=0;

    printf("Enter your chs:\n");
    while((ch= getchar())!='#')
    {
        switch(ch)
        {
            case ' ':
                ch_kg++;
                break;
            case '\n':
                ch_hh++;
                break;
            default :
                ch_qt++;
                break;
        }
    }
    printf("空格数：%d,换行数：%d,其它字符数：%d\n",ch_kg,ch_hh,ch_qt);

    return 0;
}