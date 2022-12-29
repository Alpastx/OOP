 #include <stdio.h>
 #include <conio.h>
 #include <stdlib.h>

void linear_s();
void binary_s();
void tower_h();
void towers(int,char,char,char);
 int arr[5];

void main()
{
 int ch;
 clrscr();
 while(1)
 {
 printf("\n\n 1.Linear search\n2.Binary search\n3.tower of hanoi\n4.Exit\nEnter your choice:");
 scanf("%d",&ch);

 switch(ch)
 {
 case 1:
 linear_s();
 break;
 case 2:
 binary_s();
 break;
 case 3:
 tower_h();
 break;
 case 4:
 exit(0);
 default:
 printf("\ninavlid choice");
 }
 }
 getch();
 }


 void linear_s()
 {
int i, j,el;


printf("\nEnter 5  elements of array\n");

for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
   printf("\n Araay elments are");
	for(i=0;i<5;i++)
     {
     printf("\n %d",arr[i]);
	     }

  printf("\nEnter the element that you want to search:");
  scanf("%d",&el);

  for(i=0;i<5;i++)

  {
       if(el==arr[i])
       {

       printf("\nElement %d found at %d position",el,i);
       break;
	 }
	}
	if(i==5)
	{
	printf("\n Element not present");
	}

     }

     void binary_s()
     {
      int i,j,el,high,low,mid,found,swap;


printf("\nEnter 5  elements of array\n");

for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
   printf("\n Araay elments are");
	for(i=0;i<5;i++)
     {
     printf("\n %d",arr[i]);
	     }

    for(i=0;i<5;i++)
  {

  for(j=i+1;j<5;j++)
  {
   if(arr[i]>arr[j])
   {
     swap=arr[i];
     arr[i]=arr[j];
     arr[j]=swap;

     }
     }
     }
       printf("\nSorted array is:");


       for(i=0;i<5;i++)
     {
     printf("\n %d",arr[i]);
	     }

  printf("\nEnter the element that you want to search:");
  scanf("%d",&el);

  high=5-1;
  low=0;

   while(low<=high)

  {    mid= (high+low)/2;
       if(arr[mid]==el)
       {

       printf("\nElement %d found at %d position",el,mid);

       found=1;
       break;
       }
       else
       {

	if(el>arr[mid])

	   low=mid+1;


	else

	high=mid-1;

	}
	}
	if(!found)
	{
	printf("Element not found ");
	}



  }
  void tower_h()
  {

 int num;

    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves  in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');

  }


  void towers(int num, char start, char dest, char aux)
{

    if (num == 1)
    {
	printf("\n Move disk 1 from peg %c to peg %c", start,  dest);
	return;
    }

    towers(num - 1,  start, aux,  dest);
    printf("\n Move disk %d from  %c to  %c", num, start,  dest);
    towers(num - 1, aux,  dest,  start);
}
















