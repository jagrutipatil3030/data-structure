#include<iostream.h>
#include<conio.h>
void main()
{
  int array[5],i;
  clrscr();
  cout<<"Enter Array Element : /n ";
  for(i=0;i<5;i++)
  {
     cin>>array[i];
  }
  cout<<"Element Are : /n";
  for(i=0;i<5;i++)
  {
     cout<<array[i]<<"/n";
  }
  getch();
}
