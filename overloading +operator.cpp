#include<iostream>
using namespace std;
class complax
{
private:
    float x;    //real part
    float y;    //imaginary part
public:
    complax()   //constructor 1
    {

    }
    complax(float real, float imaginary)    //constructor 2
    {
        x=real;
        y=imaginary;
    }
    complax operator+(complax);
    void display();
};
complax complax::operator+(complax c)
{
    complax temp;   //temporary
    temp.x=x+c.x;   //these are
    temp.y=y+c.y;   //float additions
    return (temp);
}
void complax::display()
{
    cout<<x<<"+j"<<y<<endl;
}
int main()
{
    complax c1,c2,c3;   //invokes constructor 1
    c1=complax(2.5,3.5);    //invokes constructor 2
    c2=complax(1.6,2.7);
    c3=c1+c2;
    cout<<"c1=";c1.display();
    cout<<"c2=";c2.display();
    cout<<"c3=";c3.display();
    return 0;
}
