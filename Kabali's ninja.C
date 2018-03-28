#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],y[10],diff[10],i;
printf("enter number of ninja's in kabali team and opponent team\n");
for(i=0;i<10;i++)
{
scanf("%d%d",&x[i],&y[i]);
}
for(i=0;i<10;i++)
{
diff[i]=y[i]-x[i];
printf("%d\n",diff[i]);
}
getch();
return 0;
}
