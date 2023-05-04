#include<iostream.h>
#include<conio.h>
class addE
{
  public :
  int i,newE,arr[100],size;
   void put();
   void show();
};
void addE :: put()
{
   cout<<"Enter Size Of array\n";
   cin>>size;
  
  cout<<"Enter the Array Element \n";
  for(i=0;i<size;i++)
  {
     cin>>arr[i];
  }
    cout<<"Array Element are  \n";
  for(i=0;i<size;i++)
  {
     cout<<arr[i]<<" ";
    }   
}

void addE :: show()
{
  cout<<"Enter new Element to Added\n";
  cin>>newE;
  for(i=size-1;i>=0;i--)
 {
   arr[i+1]=arr[i];
 }
  arr[0]=num;
  size++;
}  
void main()
{
  clrscr();
  addE a1;
  a1.put();
  a1.show();
  getch();
}
