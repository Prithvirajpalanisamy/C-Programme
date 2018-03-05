#include<stdio.h>
#include<conio.h>
int main();
{
int n,count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("the count is %d",count);
}
