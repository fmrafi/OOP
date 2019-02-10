#include<iostream>
using namespace std;
class student
{
private:
    int a;
    int b;
    int c;
public:
    void get(int x, int y, int z)
    {
    a=x;
    b=y;
    c=z;
    }
   void display()
   {
       cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl<<a+b+c<<endl;
   }
};
int main()
{
    student ob1;
    int d, e, f;
    cout<<"Enter three number:"<<endl;
    cin>>d>>e>>f;
    ob1.get(d,e,f);
    ob1.display();
    return 0;
}
