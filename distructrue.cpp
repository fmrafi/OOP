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
    add(add &b1,add &b2,add &b3)
    {
        a=b1.a+b2.a+b3.a;
        b=b1.b+b2.b+b3.b;
    }
    ~add()
    {
        cout<<a<<'+'<<b<<'i'<<endl;
    }

};
int main()
{

    int m,n,p,q,o,r;
    cin>>m>>n>>p>>q>>o>>r;
    add ob1(m,n);
    add ob2(p,q);
    add ob3(o,r);
    add ob4(ob1,ob2,ob3);
    return 0;
}


