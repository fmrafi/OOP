#include<iostream>
using namespace std;
class space
{
private:
    int x;
    int y;
    int z;
public:
    void get(int a,int b,int c);
    void display();
    void operator-();   //overloading unary minus
};
void space::get(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space::display()
{
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<z<<"\n";
}
void space::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    space s;
    s.get(10,-20,30);
    cout<<"s :";
    s.display();
    -s;     //activates operator-() function
    cout<<"s :";
    s.display();
    return 0;
}
