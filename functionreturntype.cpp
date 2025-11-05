#include<iostream>
using namespace std;
class complex1
{
    float real;
    float imag;
    public:
    void getdata()
    {
        cout<<"enter the real part:";
        cin>>real;
        cout<<"enter the imag part:";
        cin>>imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    complex1 add(complex1 c2){
        complex1 temp;
        temp.real = real+c2.real;
        temp.imag = imag+c2.imag;
        return temp;
    }
};
int main()
{
    complex1 c1,c2,c3;
    cout<<"enter the first complex number"<<endl;
    c1.getdata();
    cout<<" enter second complex number"<<endl;
    c2.getdata();
    c3=c1.add(c2);
    cout<<"\n sum of the two complex numbers:";
    c3.display();
    return 0;
}
