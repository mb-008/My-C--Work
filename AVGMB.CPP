#include<conio.h>
#include<stdio.h>
void main(){clrscr();
float a,b,c,d,e;
printf("Enter Marks in Four Subjects");
scanf("%f %f %f %f",&a,&b,&c,&d);
e=(a+b+c+d)/4;
printf("Average Marks : %f",e);
getch();}