#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter the a,b value");
scanf("%d,%d",&a,&b);
{
a=a^b;
b=a^b;
a=a^b;
}
printf("the value%d,%d",a,b);
getch();
return 0;
}
