#include<iostream>
using namespace std;
class book
{
    private:
    int accno,pages;
    char bookname[50],author[50],ISBno[50];
    float price;
    public:
    void getbookdetails();
    void displaybook();
};
void book::getbookdetails()
{
    cout<<"enter the book name:";
    cin>>bookname;
    cout<<"author:";
    cin>>author;
    cout<<"isb no:";
    cin>>ISBno;
    cout<<"access no:";
    cin>>accno;
    cout<<"no of pages:";
    cin>>pages;
    cout<<"price of book:";
    cin>>price;
}
void book::displaybook()
{
    cout<<"bookname:"<<bookname;
    cout<<"authnor:"<<author;
    cout<<"isbno:"<<ISBno;
    cout<<"acc.no:"<<accno;
    cout<<"no of pages:"<<pages;
    cout<<"price:"<<price;
}
int main()
{
    int i,n;
    book b[100];
    cout<<"enter the n value";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        b[i].getbookdetails();
        b[i].displaybook();
    }
}