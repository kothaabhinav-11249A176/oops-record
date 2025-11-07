#include<iostream.h>
#include<conio.h>
class student{
private:
char name[20];
int rno;
public:
void getstudent(){
cout<<"Enter name of the student = ";
cin>>name;
cout<<"Enter roll number of the student = ";
cin>>rno;
}
void displaystudent(){
cout<<"Name of the student = "<<name;
cout<<"\nRoll number of the student = "<<rno;
}
};
class bsc:public student{
private:
int phy,chem,math;
public:
void getbsc(){
getstudent();
cout<<"Enter math marks = ";
cin>>math;
cout<<"Enter physics marks = ";
cin>>phy;
cout<<"Enter chemistry marks = ";
cin>>chem;
}
void displaybsc(){
displaystudent();
cout<<"\nMath marks = "<<math;
cout<<"\nPhysics marks = "<<phy;
cout<<"\nChemistry marks = "<<chem;
}
};
class ba:public student{
private:
int hindi,punjabi;
public:
void getba(){
getstudent();
cout<<"Enter Hindi marks = ";
cin>>hindi;
cout<<"Enter Punjabi marks = ";
cin>>punjabi;
}
void displayba(){
displaystudent();
cout<<"\nHindi marks = "<<hindi;
cout<<"\nPunjabi marks = "<<punjabi;
}
};
void main(){
bsc b1;
ba b2;
int choice;
clrscr();
cout<<"1. BSc  2. BA \nEnter your stream = ";
cin>>choice;
if(choice==1){
b1.getbsc();
clrscr();
b1.displaybsc();
}else{
b2.getba();
clrscr();
b2.displayba();
}
getch();
}
