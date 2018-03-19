#include<stdio.h>
#include<conio.h>
int main(void)
{
int k,n,i,rem;
char ch[100];
printf("enter the string");
scanf("%s",&ch);
printf("enter the number");
scanf("%d",&k);
for(i=0;i<=k;i++)
{
n=ch%10;
ch=ch/10;
rem=rem+ch;
printf("%d",rem);
}
getch();
return 0;
}
