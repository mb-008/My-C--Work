#include<conio.h>
#include<stdio.h>
void main(){ clrscr();
int a;
printf("Enter a Number");
scanf("%d",&a);
if(a%5==0&&a%11==0)
printf("Number is Divisible by both 5 and 11 \n");
else
printf("Not divisible");
getch();}