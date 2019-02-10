#include<iostream>
#define pi 3.1416
using namespace std;
void area(float x)
{
    float result;

    result=pi*(x*x);
    cout<<result;
}
int main()
{
 float b;
 cin>>b;
 area(b);

 return 0;
}


