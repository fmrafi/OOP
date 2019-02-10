#include<iostream>
using namespace std;
class unary
{
    private:
    int a;
    public:
    unary(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a<<endl;
    }
    unary operator-()
    {
        a=-a;
    }

};
int main()
{
    unary obj (4);
    -obj;
    obj.display();
    return 0;
}
