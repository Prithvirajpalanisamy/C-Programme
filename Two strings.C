#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a,b;
char x[10],y[10];
printf("enter the string ");
scanf("%s",&x);
printf("enter the string ");
scanf("%s",&y);
a=strlen(x);
b=strlen(y);
if(a>=b)
{
printf("%s",x);
}
else
{
printf("%s",y);
getch();
return 0;
}
