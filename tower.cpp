#include<iostream.h>
#include<conio.h>
void demo 
{
      public :
             void towerOfHanio(int n,char from_rod,char to_rod,char axu_rod);
             if(n==0)
             {
               return;
               }
               towerOfHanio(n-1,from_rod,aux_rod,to_rod);
               cout<<"move disk"<<n<<"from rod"<<from_rod<<"to rod"<<to_rod<<endl;
               towerOfhanio(n-1,aux_rod,to_rod,from_rod);
  };
void main()
{
   int n=3;
  clrscr();
    towerOfhanoi(n,'a','b','c');
  getch();
}
               
