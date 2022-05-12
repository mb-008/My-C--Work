#include<stdio.h>
#include<conio.h>
void main(){ clrscr();
float f,c;
printf("Enter Temperture in Fahrenheit");
scanf("%f",&f);
c=(5*(f-32))/9;
printf("Tempertaure in Celsius :%f",c);
getch();}