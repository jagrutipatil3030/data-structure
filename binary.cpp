#include<iostream.h>
#include<conio.h>
void main()
{
  int num[]={2,5,7,9,10,12,22}
  int x,f,s,m,e,i;
  clrscr();
  cout<<"array elelemt are";
  for(i=0;i<7;i++)
  {
    cout<<num[i]<<" ";
  }
  cout<<"enter the number you want to search";
  cin>>x;
  f=0;
  s=0;
  e=6;
  while(s<=e)
  {
     m=(s+e)/2;
    if(x==num[m])
    {
      cout<<"number found at index "<<m;
      f=1;
      break;
    }
    else if(x>num[m])
    {
      s=m+1;
    }
    else if(x<num[m])
    {
      e=m-1;
    }
  }
  if(f==0)
  {
    cout<<"number not founde";
  }
  getch();
}
   
