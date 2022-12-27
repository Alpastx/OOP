#include<iostream.h>
#include<conio.h>
class xyz;
class abc
{
int p;
public:

void get_data()
{
cout<<"\nEnter 1st Number: ";
cin>>p;
}

friend void smol(abc,xyz);
};
class xyz
{
int q;
public:
void get_data()
{
cout<<"Enter 2nd Number: ";
cin>>q;
}
friend void smol(abc,xyz);
};

void smol(abc obj1,xyz obj2)
{
if(obj1.p>obj2.q)
{
cout<<"Smallest Number: "<<obj2.q;
}
else
{
cout<<"Smallest Number: "<<obj1.p;
}
}
void main()
{
clrscr();
abc a;
xyz b;
a.get_data();
b.get_data();
smol(a,b);
getch();
}