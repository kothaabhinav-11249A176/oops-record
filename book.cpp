#include<iostream>
using namespace std;
class book
{
    private:
    int accno,pages;
    char bookname[50],author[50],ISBno[50];
    float price;
    public:
    void getbookdetails()
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
    void displaybook()
    {
            cout<<"bookname:"<<bookname<<endl;
            cout<<"author:"<<author<<endl;
            cout<<"isbno:"<<ISBno<<endl;
            cout<<"acc.no:"<<accno<<endl;
            cout<<"no of pages:"<<pages<<endl;
            cout<<"price:"<<price<<endl;
    }
    
};
int main()
{
    book b;
    b.getbookdetails();
    b.displaybook();
    return 0;
}