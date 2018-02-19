#include<stdio.h>
#include<conio.h>
int main()
{
min=input("enter the time in minute\n");
hour=min/60;
min=min%60;
print(str(hour)+" "+str(min));
getch();
return 0;
}
