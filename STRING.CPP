#include<iostream.h>
#include<conio.h>
#include<string.h>
class str
{
char a[20],b[20];
public:
void get_data()
{
cout<<"Enter Two Strings: ";
cin>>a>>b;
}
void operator +()
{
cout<<"CON: "<<strcat(a,b)<<endl;
}
};
void main()
{
clrscr();
str s;
s.get_data();
+s;
getch();
}