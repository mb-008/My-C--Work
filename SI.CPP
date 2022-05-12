#include <stdio.h>
#include <conio.h>
void main()
{clrscr();
int p,r,t,s;
printf("Enter Principle,Rate(Per Annum) And Time(Years) For S.I");
scanf("%d %d %d",&p,&r,&t);
s=(p*r*t)/100;
printf("Simple Interest : %d",s);
getch();}