/*
#include <stdio.h>
#define HOUR 40
#define JBSALARY 400.00
#define SL_300 0.15
#define SL_150 0.20
#define SL_450 0.25

int main(void)
{
    int hours,num;
    float salary,s,profit,money;
    
    printf("Please num(1-5):\n");
    while(scanf("%d",&num)==1)
    {
        switch(num)
        {
            case 1:
                salary=8.75;
                printf("2");
                break;
            case 2:
                salary = 9.33;
                break;
            case 3:
                salary = 10.00;
                break;
            case 4:
                salary = 11.20;
                break;
            case 5:
                goto b;
                break;
            default:
                printf("Please num(1-5):\n");
                continue;
        }
        break;
    }
    printf("Please your hours:\n");
    while(scanf("%d",&hours)==1)
    {
        if(hours<=HOUR)
        {
            money = hours * salary;
            if(money<=300)
                s = money*SL_300;
            else if(money<=450)
                s = 300*SL_300+(money-300) * SL_150;
            else
                s = 300*SL_300+150*SL_150+ SL_450 *(money-300-150);
        }
        else
        {
            money = hours * money;
            if(money<=300)
                s = money*SL_300;
            else if(money<=450)
                s = 300*SL_300+(money-300) * SL_150;
            else
                s = 300*SL_300+150*SL_150+ SL_450 *(money-300-150);
                
        }   
        profit = money-s;
        printf("工资总额：%.2f,税金：%.2f,净收入：%.2f\n",
                money,s,profit);
    }
    b:printf("结束\n");
    return 0;
}
*/
#include <stdio.h>
#define BASE_SALARY 10.00
#define EXTRA_HOUR 1.5
#define BASE_TAX 0.15
#define EXTRA_TAX 0.2
#define EXCEED_TAX 0.25

void show_menu(void);           //显示基本工资的菜单函数
float get_hours(void);          //读取用户输入工作时长的函数
void calc_salary(float base_hours,float hours);     
//依据基本工资和工作时长计算工资、税金、净收入的函数
int main(void)
{
    float hours =0;
    char selected;
    do
    {
        show_menu();
        scanf("%c",&selected);
        switch(selected)
        {
            case '1':
                printf("Hello,you select $8.75/hr.Enter the work hours:");
                scanf("%f",&hours);
                calc_salary(8.75,hours);
                while (getchar()!='\n')
                    continue;
                break;
            case '2':
                printf("Hello,you select $9.33/hr.Enter the work hours:");
                scanf("%f",&hours);
                calc_salary(9.33,hours);
                while (getchar()!='\n')
                    continue;
                break;
            case '3':
                printf("Hello,you select $10.00/hr.Enter the work hours:");
                scanf("%f",&hours);
                calc_salary(10.00,hours);
                while (getchar()!='\n')
                    continue;
                break;
            case '4':
                printf("Hello,you select $11.20/hr.Enter the work hours:");
                scanf("%f",&hours);
                calc_salary(11.20,hours);
                while (getchar()!='\n')
                    continue;
                break;
            case '5':
                while (getchar()!='\n')
                    continue;
                break;
                break;
            default:
                printf("Error selected! please retry!\n");
                while (getchar()!='\n')
                    continue;
                break;
        }
    }while(selected !='5');
    printf("Done.\n");
    return 0;
}


void show_menu(void)
{
    char s1[] = "1) $8.75/hr";
    char s2[] = "2) $9.33/hr";
    char s3[] = "3) $10.00/hr";
    char s4[] = "4) $11.20/hr";
    char s5[] = "5) quit";

    printf("******************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action.\n");
    printf("%-40s",s1);
    printf("%-40s\n",s2);
    printf("%-40s",s3);
    printf("%-40s\n",s4);
    printf("%-40s\n",s5);
    printf("******************************************************************\n");
}

void calc_salary(float base_salary,float hours)
{
    float salary,tax,taxed_salary;
    
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
    printf("\ncontinue\n");
}

