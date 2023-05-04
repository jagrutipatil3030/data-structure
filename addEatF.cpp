#include<iostream.h>
#include<conio.h>
class demo
 {
     public:
       void show();
 };
     void demo :: show()
{
    int const s=10;
     int arr[s]={2,3,4,5,6};
      int newEle,i;
        cout<<"Enter New elemet to add \n";
          cin>>newEle;
     for(i=s-2;i>=0;i--)
    {
       arr[i+1}=arr{i];
    }
   arr[0]=newEle;
        for(i=0;i<s;i++)
        {
          cout<<arr[i];
        }
}
 void main ()
        {
          clrscr();
          demo d1;
          d1.read();
          getch();
        }
  
  
