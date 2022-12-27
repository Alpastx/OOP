#include<iostream.h>
#include<conio.h>
class book
{
char author_name[30];
public:
int book_price;
void get_data()
{
cout<<endl<<"ENTER THE NAME OF THE AUTHOR OF THE BOOK: ";
cin>>author_name;
cout<<endl<<"ENTER THE PRICE OF THE BOOK: ";
cin>>book_price;
}
void put_data(){
cout<<endl<<"THE NAME OF THE AUTHOR IS: "<<author_name;
cout<<endl<<"THE BOOK PRICE IS: "<<book_price;
}
};
void main()
{
book b1,b2;
clrscr();
cout<<"FOR BOOK 1";
b1.get_data();
cout<<"FOR BOOK 2";
b2.get_data();

if(b1.book_price > b2.book_price)
{
cout<<endl<<"THE BOOK WITH HIGHER PRICE is BOOK 1";
b1.put_data();
}
else
{
cout<<endl<<"THE BOOK WITH HIGHER PRICE BOOK 2 ";
b2.put_data();
}
getch();
}