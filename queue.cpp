#include <iostream.h>
#include<conio.h>
int queue[50];
int n = 50;
int front = - 1;
int rear = - 1;
void insert_ele() {
int val;
if (rear == n - 1)
cout<<"Queue Overflow"<<endl;
else {
front = 0;
cout<<" insert value in the queue : "<<endl;
cin>>val;
rear++;
queue[rear] = val;
}
}
void delete_ele() {
if (front == - 1) {
cout<<"Queue Underflow ";
return ;
} else {
cout<<"Element deleted from queue is : "<< queue[front] <<endl;
front++;
}
  }
void display_queue () {
if (front == - 1 )
cout<<"Queue is empty"<<endl;
else {
cout<<"Queue elements are : ";
for (int i = front; i <= rear; i++)
cout<<queue[i]<<" ";
cout<<endl;
}
}
int main() 
{
clrscr();
int ch;
cout<<"1) insertion element to the queue"<<endl;
cout<<"2) Delete element from queue"<<endl;
cout<<"3) Display all the elements of queue"<<endl;
cout<<"4) Exit"<<endl;
do {
cout<<"Enter your choice : "<<endl;
cin>>ch;
switch (ch) {
case 1: insert_ele();
break;
case 2: delete_ele();
break;
    case 3: display_queue ();
break;
case 4: cout<<"Exit"<<endl;
break;
default: cout<<"Invalid choice"<<endl;
}
} 
while(ch!=4);
return 0;
getch();
}
