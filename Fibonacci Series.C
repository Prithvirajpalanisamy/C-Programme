#include<stdio.h>
#include<conio.h>
int main(void) 
{
int i=0,j=1,k,n,l;
scanf("%d",&n);
printf("%d\t%d",i,j);
for(l=2;l<=n;l++)
{
k=i+j;	
printf("\t%d\t",k);
i=j;
j=k;
}
getch();
return 0;
}
