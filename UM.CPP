#include<iostream.h>
#include<conio.h>
class data
{
int cm;
public:
void get_data()
{
cout<<"Enter Cms:";
cin>>cm;
}
void operator -()
{
cm=--cm;
}
void display()
{
cout<<"Cm="<<cm;
};
};
int main()
{
clrscr();
data a1;
a1.get_data();
-a1;
a1.display();
getch();
}