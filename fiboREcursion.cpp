#include<iostream.h>
#include<conio.h>
int fibo(int n)
{
   if(n<=1)
   {
      return n;
   }
         return fibo(n-1)+fibo(n-2);
}
void main()
{
  clrscr();
  int num;
  cout<<"ënter number:-";
  cin>>num;
 for(int i=0;i<num;i++)
   {
     cout<<fibo(i)<<" ";
  }
getch();
}
