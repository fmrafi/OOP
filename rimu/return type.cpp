#include<iostream>
#define pi 3.1416
using namespace std;
float area(float r)
{
    float result;

    result=pi*r*r;

    return result;
}
int main()
{
    float i,j;
    cin>>j;
    i=area(j);
    cout<<i;
    return 0;

}


