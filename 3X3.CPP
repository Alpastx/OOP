#include<iostream.h>
#include<conio.h>

int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
clrscr();
cout<<"\n Enter 9 Elements for 1st Matrix: ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];
}
}
cout<<"\n Enter 9 Elements for 2nd Matrix: ";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>b[i][j];
c[i][j]=a[i][j]+b[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"\n Addiion is : "<<c[i][j]; }
}
getch();
}