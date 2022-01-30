#include<stdio.h>
void main()
{
int a[10],n,pos,i;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\nenter position");
scanf("%d",&pos);
n=n-1;
for(i=pos-1;i<n;i++)
{
a[i]=a[i+1];
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
}
