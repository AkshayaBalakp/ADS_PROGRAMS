#include<stdio.h>
 void main()
 {
 int a[10],n,n1,pos,i;
 printf("enter the number of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }
 printf("\n");
 printf("enter the position");
 scanf("%d",&pos);
 n=n+1;
 printf("num to be inserted");
 scanf("%d",&n1);
 for(i=n-1;i>=pos-1;i--)
 {
 a[i+1]=a[i];
 }
 a[pos-1]=n1;
 for(i=0;i<n;i++)
 {
 printf("\n%d",a[i]);
 }
 }
