#include<iostream>
using namespace std;
class time1
{
    private:
    int hours,minutes;
    public:
    void gettime();
    void addtime(time1 x1,time1 x2);
    void display();
};
void time1::gettime()
{
    cout<<"enter hours:";
    cin>>hours;
    cout<<"enter minutes:";
    cin>>minutes;
}
void time1::addtime(time1 x1,time1 x2)
{
    minutes=x1.minutes+x2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+x1.hours+x2.hours;
}
void time1::display()
{
    cout<<"hours:"<<hours<<endl;
    cout<<"minutes:"<<minutes<<endl;
}
int main()
{
    time1 t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3.addtime(t1,t2);
    t1.display();
    t2.display();
    t3.display();
}