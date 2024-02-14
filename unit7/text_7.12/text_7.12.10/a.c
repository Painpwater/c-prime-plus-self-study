/*
#include <stdio.h>
#define JCL 0.15
#define CCL 0.28

int main(void)
{
    float salary,sj,jc;
    int num;

    while(scanf("%d",&num)==1)
    {
        switch (num)
        {
        case 1:
            jc = 17850;
            break;
        case 2:
            jc = 23900;
            break;
        case 3:
            jc = 29750;
            break;
        case 4:
            jc = 14875;
            break;
        default:
            break;
        }
        while(scanf("%f",&salary)==1)
        {
            if(salary<=jc)
                sj = salary * JCL;
            else
                sj = jc* JCL + (salary-jc)*CCL;
            break;
        }   
        printf("税金为%.2f",sj);
    }

    return 0;
}
*/
#include <stdio.h>
#define SINGLE 17850
#define HOLDER 23900
#define MARRY 29750
#define DIVORCE 14875
#define BASE_TAX 0.15
#define EXTRA_TAX 0.28

int main(void)
{
    char type;
    float salary;
    float tax,salary_taxed;

    do{
        printf("Please select tax type.There are for type:\n");
        printf("1)Single    2)House holder  3)Married   4)Divorced  5)Quit:\n");
        scanf("%c",&type);

        switch (type)
        {
        case '1':
            printf("Enter your salary:");
            scanf("%f",&salary);
            if(salary<=SINGLE)
                tax = salary *BASE_TAX;
            else
                tax= SINGLE*BASE_TAX+(salary-SINGLE)*EXTRA_TAX;
            salary_taxed = salary -tax;
            printf("Hi,your salary is %.2f,tax is %.2f ,after tax salary is %.2f\n",
                    salary,tax,salary_taxed);
            break;
        case '2':
            printf("Enter your salary:");
            scanf("%f",&salary);
            if(salary<=HOLDER)
                tax = salary *BASE_TAX;
            else
                tax= HOLDER*BASE_TAX+(salary-HOLDER)*EXTRA_TAX;
            salary_taxed = salary -tax;
            printf("Hi,your salary is %.2f,tax is %.2f ,after tax salary is %.2f\n",
                    salary,tax,salary_taxed);
            break;
        case '3':
            printf("Enter your salary:");
            scanf("%f",&salary);
            if(salary<=MARRY)
                tax = salary *BASE_TAX;
            else
                tax= MARRY*BASE_TAX+(salary-MARRY)*EXTRA_TAX;
            salary_taxed = salary -tax;
            printf("Hi,your salary is %.2f,tax is %.2f ,after tax salary is %.2f\n",
                    salary,tax,salary_taxed);
            break;
        case '4':
            printf("Enter your salary:");
            scanf("%f",&salary);
            if(salary<=DIVORCE)
                tax = salary *BASE_TAX;
            else
                tax= DIVORCE*BASE_TAX+(salary-DIVORCE)*EXTRA_TAX;
            salary_taxed = salary -tax;
            printf("Hi,your salary is %.2f,tax is %.2f ,after tax salary is %.2f\n",
                    salary,tax,salary_taxed);
            break;
        case '5':
            break;
        default:
            printf("Wrong type.please retry.\n");
        }
        while (getchar()!='\n')
            continue;
    }while(type !='5');
    printf("Done.\n");

    return 0;
}