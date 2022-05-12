#include<conio.h>
#include<stdio.h>
void main(){clrscr();
int a;
printf("Enter Year\n");
scanf("%d",&a);
if(a%4==0)
printf("Year is a Leap Year");
else
printf("Not a Leap Year");
getch();}