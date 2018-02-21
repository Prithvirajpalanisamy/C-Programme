#include<stdio.h>
#include<conio.h>
int main()
{
int d=0;                          
int e;                           
while ((e=getchar())!=EOF)
{   
if(e==' ') 
{ 
d++;
}
if(e=='\n')
printf("%d",d);
}
getch();
return 0;
}
