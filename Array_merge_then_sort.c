#include<stdio.h>
void main()
{
int i,j=0,a[20],b[20],c[20],m,n,s=0;
printf("enter array1 size\n");
scanf("%d",&n);
printf("enter array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter array2 size\n");
scanf("%d",&m);
printf("enter array\n");
s=n+m;
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=n;i<s;i++)
{
c[i]=b[j];
j++;
}
printf("merged array is \n");
for(i=0;i<s;i++)
{
printf("%d\n",c[i]);
}
printf("sorted array is \n");
for(i=0;i<s;i++)
{
int temp;
for(j=i+1;j<s;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
}
for(i=0;i<s;i++)
{
printf("%d",c[i]);
printf("\n");
}
}
