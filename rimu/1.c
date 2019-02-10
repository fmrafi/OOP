#include<stdio.h>
int main ()
{

int i ;
float sum , avg ,run[11];
char name[11][100];
for( i=0;i<11;i++)
{
    scanf("%f", &run[i]);
}
sum = 0 ;
for(i=0;i<11;i++)
{
    sum = sum+run[i];
}
avg = sum/11;
for(i=0;i<11;i++)
{
    if(run[i]>avg)
        printf("%.f\n\n",run[i]);
}
return 0 ;

}
