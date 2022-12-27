#include<iostream.h>
#include<conio.h>

class unary
{
int a;
public:
void get_data()
{
cout<<"Enter Data of a: ";
cin>>a;
}
void operator ++()
{
a=++a;
}
void display()
{
cout<<"After using"<<" ++"<<" A: "<<a;
}
};
int main()
{
clrscr();
unary a1;
a1.get_data();
++a1;
a1.display();
getch();
}
