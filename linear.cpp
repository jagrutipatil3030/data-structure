#include<iostream.h>
#include<conio.h>
class linear1
{
  public:
     int arr[100],i.size,ele;
     void get();
     void show();
};
void linear1 :: get()
{
   cout<<"Enter the size of Array";
   cin>>size;
  
  cout<<"Enter Array Element :\n";
  for(i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  cout<<"Array Element are :\n";
  for(i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
}   
void linear1 :: show ()
{
  cout<<"Enter Element to Search";
    cin>>ele;
  for(i=0;i<size;i++)
  {
    if(arr[i]==ele)
    {
      cout<<"Element is found At"<<i;
      break;
    }
  }
  if(i==size)
  {
    cout<<"Element is not found";
  } 
}
void main()
{
  clrscr();
      linear1 l1;
        l1.get();
        l1.show();
    getch();
}
  
       
