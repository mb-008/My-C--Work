#include <stdio.h>
#include<conio.h>
#include<math.h>
void main(){ clrscr();
int a,b,c,d,e,f,g;
char o;
printf("\nEnter Numbers For Operation ");
scanf("%d %d",&b,&c);
printf("\nEnter The Operator\n1.+\n2.-\n3./\n4.*\n");
scanf("%s",&o);
switch(o){
case('+'):d=b+c;
	printf("Sum : %d",d);
	break;
case('-'):e=b-c;
	printf("Subtraction : %d",e);
	break;
case('/'):f=b/c;
	printf("Division : %d",f);
	break;
case('*'):g=b*c;
	printf("Multiplication : %d",g);
	break;
default:printf("Invalid Number Entered");
	break;}
	getch();}