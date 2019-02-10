#include<stdio.h>
#define pi 3.1416
void area(float x)
{
    float result;

    result=pi*(x*x);
    printf("%f",result);
}
int main()
{
 float b;
 scanf("%f",&b);
 area(b);

 return 0;
}

