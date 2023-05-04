#include<iostram.h>
#include<conio.h>
class array
{
  int size,i,arr[20];
  public:
       void get();
       void dis();
};
void array :: get()
   {
      cout<<"Enter size of array";
      cin>>size;
  
     cout<<"Enter array elelemt ";
      for(i=0;i<size;i++)
      {
          cin>>arr[i];
      }
 } 
  void array :: dis()
  {
    cout<<"Array Element are";
    for(i=0;i<size;i++)
    {
      cout<<arr[i];
    }
  }
  void main()
  {
    clrscr();
    array a1;
    a1.get();
    a1.dis();
    getch();
  }
    
  
