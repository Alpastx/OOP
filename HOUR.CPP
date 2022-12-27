#include<iostream.h>
#include<conio.h>
class Time
{
private:
int HR, MIN;
public:

void setTime (int x, int y)
{
HR = x;
MIN = y;
}

void showTime ()
{
cout<<endl<<HR<<":"<< MIN;
}

void normalize ()
{
HR = HR + MIN / 60;
MIN = MIN % 60;
}

Time operator+ (Time t)
{
Time temp;
temp.MIN = MIN + t.MIN;
temp.HR = HR + t.HR;
temp.normalize ();
return (temp);
}
};

void main ()
{
Time t1, t2, t3;
int a,b,c,d;
clrscr();
cout<<"Enter values for time1 in hour:min format :";
cin>>a>>b;
cout<<"enter values for time2 in hour:min format:";
cin>>c>>d;
t1.setTime (a, b);
t2.setTime (c, d);
t3 = t1 + t2;
cout<<endl<<"the set time:";
t1.showTime ();
t2.showTime ();
cout<<endl<<"Added time:";
t3.showTime ();
getch();
}
