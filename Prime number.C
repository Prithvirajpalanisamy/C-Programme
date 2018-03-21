#include<stdio.h>
#include<conio.h>
int main()
{
int num=0,i;
printf("\n enter the numbers:");
scanf("%d",&n);
for(i=2;i<n;i++)
if(n%i==0)
{
num=num+1;
break;
}
if(num==1)
{
printf("\n it is not a prime number");
}
else
{
printf("\n it is prime number");
}
return 0;
}
