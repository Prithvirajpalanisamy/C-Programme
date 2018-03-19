#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=0;
char a[50]="laptop is good";
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
c++;
}
}
printf("number of words %d",c+1);
getch();
return 0;
}
