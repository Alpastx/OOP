#include<iostream.h>
#include<conio.h>

void swap(int *,int *);
int main()
{
int a,b;
clrscr();
cout<<"Enter 2 Numbers: ";
cin>>a>>b;
cout<<"\nValues Before Swap: ";
cout<<"\na: "<<a;
cout<<"\tb: "<<b;
swap(&a,&b);
cout<<"\nValues After Swap: ";
cout<<"\na: "<<a;
cout<<"\tb: "<<b;
getch();
}

void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}