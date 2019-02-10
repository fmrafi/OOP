#include<iostream>
using namespace std;
class quantity
{
private:
    float a;
public:
    float get()
    {
        cout<<"Enter quantity of fuel in VU picnic:";
        cin>>a;
        return a;
    }
};
class price
{
private:
    float b;
public:
    float get1()
    {
        cout<<"Enter price per liter:";
        cin>>b;
      return b;
    }
};
class total:public quantity,public price
{
public:
    float c=get();
    float d=get1();
    void display()
    {
        cout<<"Total cost is:"<<c*d;
    }
};
int main()
{
    total ob;
    ob.display();
    return 0;
}
