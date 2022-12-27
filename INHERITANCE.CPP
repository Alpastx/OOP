#include<iostream.h>
#include<conio.h>

class Subject_1
{
protected:
int m1;
public:
void get_m1()
{
cout<<"Enter M1: ";
cin>>m1;
}
};

class Subject_2
{
protected:
int m2;
public:

void get_m2()
{
cout<<"Enter M2: ";
cin>>m2;
}
};

class Result: public Subject_1, public Subject_2
{
protected:
int total;
public:

void display()
{
total=m1+m2;
cout<<"Total is : "<<total;
}
};

int main()
{
clrscr();
Result r;
r.get_m1();
r.get_m2();
r.display();
getch();
}