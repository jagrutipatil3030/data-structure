#include<iostream.h>
#include<conio.h>
void main
{
clrscr();
int matrix1[3][3]={
               {1,2,3},
               {4,5,6},
               {7,8,9}
               };
int matrix2[3][3]={
              {3,2,1},
              {6,5,4},
              {9,8,7}
              };
int result[3][3]={
              {0,0,0},
              {0,0,0},
              {0,0,0}
              };
          
for(int i=0;i<3;i++)
{
  for (int j=0;j<3;j++)
  {
     result[i][j]=matrix1[i][j] + matrix2[i][j];
   }
}
cout<<"the result of addition of two matrix is : "<<endl;
  for(i=0;i<3;i++)
{
  for (j=0;j<3;j++)
  {
    cout<<result[i][j]<<"  ";
   }
   cout<<endl;
}
getch();
}

              
              
      
               
