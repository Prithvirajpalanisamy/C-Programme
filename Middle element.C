#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],c='*';
int i;
printf("enter the string");
scanf("%s",&a[i]);
 int l=0;
 for(i=0;a[i]!='\0';i++)
 {
     l++;
 }
 printf("the length of the string is %d",l);
 int d;
 d=l/2;
 if(d%2==0)
 {
 a[d]=c;
 a[d-1]=c;
 for(i=0;a[i]!='\0';i++)
 printf("%c",a[i]);
 }
 else
 {
 a[d]=c;
 for(i=0;a[i]!='\0';i++)
 printf("%c",a[i]);
 }
 getch();
 return 0;
 }
