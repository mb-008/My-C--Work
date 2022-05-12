#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter A Number");
scanf("%d",&a);
if(a>0)
printf("Number is Positive");
else
 if(a<0)
 printf("Number is Negative");
 else
 printf("Number is Zero");
 getch();}