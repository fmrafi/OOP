#include<iostream>
using namespace std;
class add
{
   private:
       int a;
       int b;

   public:
     add(int x,int y)
    {
        a=x;
        b=y;
    }
    add(add &b1,add &b2)
    {
        a=b1.a+b2.a;
        b=b1.b+b2.b;
        cout<<a<<'+'<<b<<'i'<<endl;
    }

};
int main()
{

    int m,n,p,q;
    cin>>m>>n>>p>>q;
    add ob1(m,n);
    add ob2(p,q);
    add ob3(ob1,ob2);
    return 0;
}

