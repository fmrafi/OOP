#include<iostream>
using namespace std;
class student
{
private:
    int a;
    int b;
    int m;
public:
    void get(int x, int y)
    {
    a=x;
    b=y;
    }
    int check()
    {
     m=(a>b)?a:b;
     return m;
    }
   void display()
   {
       cout<<"maximum value is="<<check()<<endl;
   }
};
int main()
{
    student ob1;
    int d, e;
    cout<<"Enter two number:"<<endl;
    cin>>d>>e;
    ob1.get(d,e);
    //ob1.check();
    ob1.display();
    return 0;
}

