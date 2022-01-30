#include<stdio.h>
int main()
{
int i,count=0;
int a[20],n;
int choice;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\nenter the searching elements\n");
scanf("%d",&choice);
for(i=0;i<6;i++)
{
if(a[i]==choice)
count++;
}
if(count==1)
{
printf("element included\n");
}
else
{
printf("element not included\n");
}
return 0;
}
