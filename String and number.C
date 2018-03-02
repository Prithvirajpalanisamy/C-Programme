#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void) 
{
char ch[100];
int K,i;
gets(ch);
scanf("%d",&K);
for(i=0;i<K;i++)
{
printf("%s\n",ch);
}
getch();
return 0;
}
