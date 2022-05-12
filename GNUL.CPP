#include <stdio.h>
#include <conio.h>
void main(){clrscr();
int i,j=0,max,a[3];
printf("Enter 3 Numbers\n");
for(i=0;i<3;i++)
{scanf("%d",&a[i]);}
max=a[0];
while(j<3){
	   if(a[j]>max)
	     max=a[j];
	      j++;}
printf("Greatest Number : %d",max);
getch();}