#include<iostream.h>
#include<conio.h>
int main()
{
int a[5],i,sum=0;
clrscr();
cout<<"\n Enter 5 Elements: ";
for(i=0;i<5;i++)
{
cin>>a[i];
sum=sum+a[i];
}
cout<<"Sum of Array Elements: "<<sum;
getch();
}