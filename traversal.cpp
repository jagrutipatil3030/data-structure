//traversaling of array
#include<iostream.h>
#include<conio.h>
void main ()
{
  int a[50],size,i;
  clrscr();
  cout<<"Enter size of array /n";
  cin>>size;
  
  cout<<"Enter Array Element /n";
    for(i=0;i<size;i++)
     {
      cin>>a[i];
     }    
  cout<<"array Element are /n";
    for(i=0;i<size;i++)
     {
      cout>>a[i];
     } 
  getch();
}
