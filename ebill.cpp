#include<iostream>
using namespace std;
class ebill
{
    private:
    int customerid,units;
    char customername[50],address[50];
    float amount;
    public:
    void getcustomerdetails()
    {
        cout<<"enter the customer id:";
        cin>>customerid;
        cout<<"enter customer name:";
        cin>>customername;
        cout<<"enter address:";
        cin>>address;
        cout<<"enter no of units:";
        cin>>units;
    
    }
    void calculatebill()
    {
        if(units<=100)
        amount=0;
        else if(units<=100)
        amount=(units-100)*2.25;
        else if(units<=400)
        amount=(100*2.25)+(units-200)*4.25;
        else if(units<=600)
        amount=(100*2.25)+(200*4.25)+(units-400)*6.25;
        else
        amount=(100*2.25)+(200*4.25)+(400*6.25)+(units-500)*9;
    }
    void print()
    {
    cout<<"customerid:"<<customerid;
    cout<<"name:"<<customername;
    cout<<"address:"<<address;
    cout<<"units:"<<units;
    cout<<"amount:"<<amount;
    }
};
int main()
{
    ebill e;
    e.getcustomerdetails();
    e.calculatebill();
    e.print();
    return 0;
}
