#include <stdio.h>
void Temperatures(double th);

int main(void)
{
    double th;
    printf("Enter a temperature in hua:");
    while (scanf("%lf",&th)==1)
    {
        Temperatures(th);
        printf("Now enter next temperature(q to qiut):");
    }
    printf("Done.\n");
    
    return 0;
}




void Temperatures(double th)
{
    const double TH_TO_TS1 = 5.0;
    const double TH_TO_TS2 = 9.0;
    const double TH_TO_TS3 = 32.0;
    const double TS_TO_TK = 273.16;
    double ts,tk;

    ts= TH_TO_TS1/TH_TO_TS2*(th-TH_TO_TS3);
    tk = ts +TS_TO_TK;
    printf("华氏温度：%.2lf,摄氏温度：%.2lf,开氏温度：%.2lf\n",th,ts,tk);
}