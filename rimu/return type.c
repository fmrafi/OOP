#include<stdio.h>
#define pi 3.1416
float area(float r)
{
    float result;

    result=pi*r*r;

    return result;
}
void main()
{
    float i,j;
    scanf("%f",&j);
    i=area(j);
    printf("%f",i);

}

