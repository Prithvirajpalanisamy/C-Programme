#include<stdio.h>
#include<conio.h>
int main()
{
int a[30],i,n,max;
printf("enter the range");
scanf("%d",&n);
printf("enter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
getch();
return 0;
}
