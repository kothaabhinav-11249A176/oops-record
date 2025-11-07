#include <iostream>
using namespace std;
class Student{
protected:
int roll;
public:
void getRoll(){
cout<<"Enter roll number: ";
cin>>roll;
}
void displayRoll(){
cout<<"Roll number: "<<roll<<endl;
}
};
class Test:public Student{
protected:
int marks1,marks2;
public:
void getMarks(){
cout<<"Enter marks of two subjects: ";
cin>>marks1>>marks2;
}
void displayMarks(){
cout<<"Marks in Subject 1: "<<marks1<<endl;
cout<<"Marks in Subject 2: "<<marks2<<endl;
}
};
class Sports{
protected:
int score;
public:
void getScore(){
cout<<"Enter sports score: ";
cin>>score;
}
void displayScore(){
cout<<"Sports score: "<<score<<endl;
}
};
class Result:public Test,public Sports{
int total;
public:
void showResult(){
total=marks1+marks2+score;
displayRoll();
displayMarks();
displayScore();
cout<<"Total score: "<<total<<endl;
}
};
int main(){
Result r;
r.getRoll();
r.getMarks();
r.getScore();
cout<<"\n--- Student Result ---\n";
r.showResult();
return 0;
}
