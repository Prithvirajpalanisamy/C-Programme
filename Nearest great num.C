#include<stdio.h>
#include<conio.h>
int main(void)
{
int i,n,a;
printf("enter the number");
scanf("%d",&n);
if((n&(n-1))==0)
{
printf("the num is power of 2\n");
a=n*2;
printf("the nearest power of 2 is %d",a);
}
else
printf("the num is not the power of 2");
getch();
return 0;
}  
