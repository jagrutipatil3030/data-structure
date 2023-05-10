#include<iostream.h>
#include<conio.h>
int vertArry[20][20];
int count =0;
void displaymatrix(int v)
{
  int i,j;
  for(i=0;i<v;i++)
  {
    for(j=0;j<v;j++)
    {
      cout<<vertArry[i][j]<<" ";
    }
    cout<<endl;
  }
} 
void addedge(int u,int v)
{
  vertArry[u][v]=1;
  vertArry[v][u]=-1;
}
void main()
{
   clrscr();
   int v=6;
  addedge(0,4);
 addedge(0,3);
 addedge(1,2);
 addedge(1,4);
 addedge(1,5);
 addedge(2,3);
 addedge(2,5);
 addedge(5,3);
 addedge(5,4);
  displaymatrix(v);
  getch();
}
  
     
  
