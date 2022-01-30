#include<stdio.h>
#include<stdlib.h>
#define max 6
int front=-1;
int rear=-1;
int queue[max];
void enqueue(int element)
{
if((front==-1)&&(rear==-1))
{
front=0;
rear=0;
queue[rear]=element;
}
else if((rear+1)%max==front)
{
printf("queue is overflow");
}
else
{
rear=(rear+1)%max;
queue[rear]=element;
}
}
void dequeue()
{
if((front==-1)&&(rear==-1))
{
printf("\nqueue is underflow");
}
else if(front==rear)
{
printf("\nthe dequeued element is %d",queue[front]);
front=-1;
rear=-1;
}
else
{
printf("\n the dequeued element is %d",queue[front]);
front=(front+1)%max;
}
}
void display()
{
int i=front;
if((front==-1)&&(rear==-1))
{
printf("\nqueue is empty");
}
else
{
printf("\n elements in queue are :");
for(i=front;i<=rear;i++)
{
printf("%d",queue[i]);
}
}
}void main()
{
int choice,element;
do
{
printf("\n1.INSERT\n2.DELETE\n3.DISPLAY \n4.DISPLAY Front and Rear \n5.EXIT \n");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)

{
case 1 : printf("enter the element which is to be inserted:");
	 scanf("%d",&element);
	 enqueue(element);
	 break;
case 2 : dequeue();
   	 break;
case 3 : display();
	 break;
case 4 : printf("front and rear is : %d\t\t%d",queue[front],queue[rear]);
        break;
case 5 : exit(0);
 	 break;
default : printf("INVALID CHOICE!\n");
	   break;
 }
}while(choice!=0);
}
