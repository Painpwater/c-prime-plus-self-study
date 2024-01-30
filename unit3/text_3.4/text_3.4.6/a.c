//以两种方式显示float类型的值
#include <stdio.h>

int main(void)
{
    float aboat  = 32000.0f;
    double abet = 2.14e9;
    double dip = 5.32e-5L;

    printf("%f can be written %e\n",aboat,aboat);
    printf("And it's %a in hexadecimal,powers of 2 notation\n",aboat);
    printf("%f can be written %e\n",abet,abet);
    printf("%f can be written %e\n",dip,dip);
    
    return 0;
}