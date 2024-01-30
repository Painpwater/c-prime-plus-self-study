//sizeof()运算符，作用是计算整数类型的大小，单位是字节
/*int       位=32
short       位=16
long        位=32
long long   位=64
float       位=32
double      位=64
long double 位=128
*/
#include <stdio.h>

int main()
{
    printf("int size=%zd\n",sizeof(int));
    printf("short size=%zd\n",sizeof(short));
    printf("long size=%zd\n",sizeof(long));
    printf("long long size=%zd\n",sizeof(long long));
    printf("float size=%zd\n",sizeof(float));
    printf("double size=%zd\n",sizeof(double));
    printf("long double size=%zd\n",sizeof(long double));
    printf("int 位=%d\n",sizeof(int)*8);
    printf("short 位=%d\n",sizeof(short)*8);
    printf("long 位=%d\n",sizeof(long)*8);
    printf("long long 位=%d\n",sizeof(long long)*8);
    printf("float 位=%d\n",sizeof(float)*8);
    printf("double 位=%d\n",sizeof(double)*8);
    printf("long double 位=%d\n",sizeof(long double)*8);
    
    return 0;
}