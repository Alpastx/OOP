#include<iostream.h>
#include<conio.h>
int main()
{
float i,fact=1,number;
clrscr();
cout<<"Enter any Number: ";
cin>>number;
for(i=1;i<=number;i++){
fact=fact*i;
}
cout<<"Factorial of "<<number<<" is: "<<fact<<endl;
getch();
}