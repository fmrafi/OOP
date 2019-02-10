#include<iostream>
using namespace std;
class width
{
private:
    float a;
    friend class height;
public:
    float get()
    {
        cout<<"Enter the width:";
       cin>>a;
       return a;
    }
};
class height
{
public:
    float b;
    void get1()
    {
        cout<<"Enter the height:";
        cin>>b;
    }
    void display(width ob)
    {
        cout<<"The area of rectangular is:"<<ob.a*b;
    }
};
int main()
{
    width ob1;
    ob1.get();
    height ob2;
    ob2.get1();
    ob2.display(ob1);
    return 0;
}
