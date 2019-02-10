#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of large number=");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d largest number", a);
    }
  else   if(b>c)
      {
           printf("%d largest number",b);
      }
      else
       {
           printf("%d largest number",c);
       }




    return 0;
}
