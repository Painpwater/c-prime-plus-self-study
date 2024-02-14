/*
#include <stdio.h>
#define HOUR 40
#define SALARY 10.00
#define JBSALARY 400.00
#define SL_300 0.15
#define SL_150 0.20
#define SL_450 0.25

int main(void)
{
    int hours;
    float salary,s,profit;

    while(scanf("%d",&hours)==1)
    {
        if(hours<=HOUR)
        {
            salary = hours * SALARY;
            if(salary<=300)
                s = salary*SL_300;
            else 
                s = 300*SL_300+(salary-300) * SL_150;
        }
        else
        {
            salary = hours * SALARY;
            if(salary<=450)
                s = 300*SL_300+(salary-300) * SL_150;
            else 
                s = 300*SL_300+150*SL_150+ SL_450 *(salary-300-150);
        }   
        profit = salary-s;
        printf("工资总额：%.2f,税金：%.2f,净收入：%.2f\n",
                salary,s,profit);
    }

    return 0;
}
*/
#include <stdio.h>
#define BASE_SALARY 10.00
#define EXTRA_HOUR 1.5
#define BASE_TAX 0.15
#define EXTRA_TAX 0.2
#define EXCEED_TAX 0.25

int main(void)
{
    float hours = 0;
    float salary,tax,taxed_salary;

    printf("Enter your working hours in a week:");
    scanf("%f",&hours);
    if(hours<=30)
    {
        salary = hours * BASE_SALARY;
        tax = salary * BASE_TAX;
        taxed_salary = salary -tax;     //30小时以内,无加班，标准基础税率；
    }
    else if(hours<=40)
    {
        salary = hours * BASE_SALARY;
        tax = 300*BASE_TAX+(salary-300)*EXCEED_TAX;
        taxed_salary = salary -tax;     //30-40小时,无加班，额外税率；
    }
    else
    {
        salary = 40*BASE_SALARY+(hours-40)*EXTRA_HOUR;
        if(salary<=450)
            tax = 300*BASE_TAX+(salary-300)*EXCEED_TAX;
        else
            tax = 300*BASE_TAX+150*EXCEED_TAX+(salary-450)*EXCEED_TAX;
        taxed_salary = salary -tax;     // 40小时以上，加班，税率按工资450美元的分界线扣减
    }
    printf("Your salary before tax is %.2f ,tax is %.2f,salary after tax is %.2f.\n",
            salary,tax,taxed_salary);
    printf("Done.\n");

    return 0;
}