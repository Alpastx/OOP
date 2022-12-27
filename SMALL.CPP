#include<iostream.h>
#include<conio.h>

int main()
{
int a[30], no, i, min;
clrscr();
cout<<"Enter Number of Elements in Array\n";
cin>>no;
cout<<"\nEnter"<<no<<"numbers \n";
for(i=0;i<no;i++)
{
cin>>a[i];
}
min=a[0];
for(i=0;i<no;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
cout << "Minimum Element\n" << min;
getch();
}