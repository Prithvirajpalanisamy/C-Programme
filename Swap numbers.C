#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
printf("ENTER THE INPUT NOS\n");
scanf("%d%d",&a,&b);
printf("THE NOS BEFORE SWAPPING:\n%d\n%d\n",a,b);
t=a;
a=b;
b=t;
printf("\nTHE NOS AFTER SWAPPING:\n%d\n%d\n",a,b);
getch();
return 0;
}
