#include<iostream.h>
#include<conio.h>
int main()
{
int arr[50],i,j,size,temp;
clrscr();
cout<<"enter the size of array";
cin>>size;
cout<<"enter the element os array";
for(i=0;i<size;i++)
{
cin>>arr[i];
}
cout<<"your array is";
for(i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}
for(i=0;i<size;++i)
{
for(j=0;j<size-i-1;++j)
{
if (arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
  arr[j+1]=temp;
}
}
}
cout<<"after bubble sorting ypou array is";
for(i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}
getch();
