#include<iostream>
using namespace std;
class time
{
private:
    int hours;
    int minutes;
public:
    void get(int h, int m)
    {
        hours=h;
        minutes=m;
    }
    void put()
    {
        cout<<hours<<"hours and";
        cout<<minutes<<"minutes"<<endl;
    }
    void sum(time t1,time t2);
};
void time::sum(time t1, time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
int main()
{
    time T1,T2,T3;
    T1.get(2,45);
    T2.get(3,30);
    T3.sum(T1,T2);
    cout<<"T1=";T1.put();
    cout<<"T2=";T2.put();
    cout<<"T3=";T3.put();
    return 0;
}
