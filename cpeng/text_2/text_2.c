//计算1！+2！+3！                    +...+n!
#include <stdio.h>
int main()
{
    int n =1;
    int N =0;
    int ret1 = 1;
    int ret2 = 0;
    int i =1;
    scanf("%d",&N);
 /*   for ( n = 1; n <= N; n++)
    {
       for ( ret1=1, i = 1; i <=n; i++)
    {
        ret1 = ret1 *i;
    }
    ret2 =ret2+ret1;
    }
*/
      for ( n = 1; n <= N; n++)
    {
      ret1 = ret1 *n;
      ret2 =ret2+ret1;
    }
    printf("%d",ret2);

    return 0;
}