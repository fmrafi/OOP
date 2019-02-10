#include<iostream>
using namespace std;
class student
{
private:
    int a;
    int b;
    int c;
    int m;
    int check();
public:
    void get(int x, int y, int z);

   void display();
};
void student:: get(int x, int y, int z)
    {
    a=x;
    b=y;
    c=z;
    }
int student::check()
    {
     m=(a>b&&a>c)?a:(b>c)?b:c;
     return m;
    }
  void student:: display()
   {
       cout<<"maximum value is="<<check()<<endl;
   }

int main()
{
    student ob1;
    int d, e, f;
    cout<<"Enter three number:"<<endl;
    cin>>d>>e>>f;
    ob1.get(d,e,f);
    //ob1.check();
    ob1.display();
    return 0;
}


