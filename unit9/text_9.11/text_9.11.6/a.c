#include <stdio.h>
void sort(double* a,double* b,double* c);

int main(void)
{
    double x,y,z;
    x= 9.0;
    y = 12.0;
    z = 8.0;
    sort(&x,&y,&z);
    printf("x=%lf,y = %lf,z=%lf.\n",x,y,z);

    return 0;
}

void sort(double* a,double* b,double* c)
{
    double max,between,min;
    if(*a>*b && *a>*c)
    {
        max=*a;
        if(*b>*c)
        {
            between = *b;
            min = *c;
        }    
        else
        {
            between = *c;
            min = *b;
        }   
    }    
    else if(*b>*a && *b>*c)
    {
        max= *b;
        if(*a>*c)
        {
            between = *a;
            min = *c;
        }    
        else
        {
            between = *c;
            min = *a;
        }    
    }
    else
    {
        max=*c;
        if(*a>*b)
        {
            between = *a;
            min = *b;
        }    
        else
        {
            between = *b;
            min = *a;
        }    
    }
    *a = min;
    *b = between;
    *c = max;
}