#include<iostream>
using namespace std;
class unary
{
public:
	int a;

	void get()
	{
		cout<<"Enter the value: ";
		cin>>a;
	}

	void display()
	{
        cout<<"the values are: "<<a<<endl;
	}
	unary operator+(unary &b)
	{
		unary D;
		D.a=this->a+b.a;
		return D;
	}
    unary operator-()
	{
	    a=-a;
    }
};
int main()
{
	unary d1,d2,d3;
	d1.get();
	d2.get();

-d2;
d2.display();

d3=d1+d2;
d3.display();

   return 0;


}

