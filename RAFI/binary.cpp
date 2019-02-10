#include<iostream>
using namespace std;
class unary
{
    private:
    int a;


    public:
    int get(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"sum="<<a<<endl;
    }
    unary operator-()
    {
        a=-a;
    }
    unary operator+(unary &d)
    {
      unary temp;
      temp.a=d.a+a;
      return (temp);
    }

};
int main()
{
    int c,d;
    cin>>c>>d;
    unary obj1,obj2,obj3;
    obj1.get(c);
    obj2.get(d);
    -obj2;
    obj3=obj1+obj2;

    obj3.display();
    return 0;
}

