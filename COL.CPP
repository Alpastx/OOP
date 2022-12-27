#include<iostream.h>
#include<conio.h>

class College
{
protected:

float code;

public:

void get_code()
{
cout<<"Enter College Code: ";
cin>>code;
}

void show_code()
{
cout<<"College Code: "<<code;
}
};

class Student : public College
{
protected:

int stud_id;
public:

void get_id()
{
cout<<"\n Enter Student Id: ";
cin>>stud_id;
}

void display()
{
show_code();
cout<<"\n Student ID: "<<stud_id;
}
};

void main()
{
clrscr();
Student s1;
s1.get_code();
s1.get_id();
s1.display();
getch();
}