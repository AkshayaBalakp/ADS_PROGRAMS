#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void top1();
void display();
int main()
{
int choice;
while(1)
{
printf("\n1.PUSH \n2.POP \n3.DISPLAY\n4.TOP\n5.EXIT\n");
printf("enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1 : push();
	 break;
case 2 : pop();
	 break;
case 3 : display();
	 break;
case 4 : top1();
	 break;
case 5 : exit(0);
deafault : printf("\n INVALID CHOICE!");
}
}
}
void push()
{
int a;
printf("enter the data:");
scanf("%d",&a);
if(top==N-1)
{
printf("OVERFLOW");
}
else
{
top++;
stack[top]=a;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("UNDERFLOW");
}
else
{
item=stack[top];
top--;
printf("%dpoped item",item);
}
}
void top1()
{
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("%d",stack[top]);
}
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}

