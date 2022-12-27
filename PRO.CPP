#include<iostream.h>
#include<conio.h>

class product
{
private:
int product_no;
char name[30];

public:

void getdata()
{
cout<<"Enter Product No and Name: ";
cin>>product_no>>name;
}

void show_data()
{
cout<<"Product No: "<<product_no;
cout<<"\nName: "<<name;
}
};

int main()
{
clrscr();
product p, *ptr;
ptr=&p;
ptr->getdata();
ptr->show_data();
getch();
}