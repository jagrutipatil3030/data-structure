#include<iostream.h>
#include<conio.h>
int fact(int num)
{
if(num==1)
{
return num;
}
return num*fact(num-1);
}
void main()
{
clrscr();
int n,result;
cout<<"Enter number:-";
cin>>n;
result=fact(n);
cout<<"The factorial of "<<n<<" is "<<result;
getch();
}
