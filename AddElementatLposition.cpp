//insert new Element at last position of Given Array
#include<iostream.h>
#include<conio.h>
void main()
{
  int size,arr[100],i,num;
  
  cout<<"Enter the Size of array :  ";    //as per enter you size
  cin>>size;
  
  cout<<"Enter Array Element\n";
      for(i=0;i<size;i++)
     {
       cin>>arr[i];
     }
   
  cout<<"Array Element Are \n";
      for(i=0;i<size;i++)
     {
       cout<<arr[i]<<"  ";
     }
  cout<<"insert new Element At last position of Given Array /n";
  // array element are as it is just one element is add at last position
  cin>>num;
  arr[size]=num;
  cout<<"_________________New array is______________________";
      for(i=0;i<size+1;i++)
      {
        cout<<arr[i]<<" ";
      }
     
  getch();
}
