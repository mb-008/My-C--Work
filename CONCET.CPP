#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main(){clrscr();
char str1[25],str2[25];
cout<<"enter 1st string"<<"  ";
gets(str1);
cout<<"enter 2nd string"<<"  ";
gets(str2);
int i,j;
for(i=0;str1[i]!='\0';++i)
for(j=0;str2[j]!='\0';++j,++i)
{
    str1[i]=str2[j];
}
str1[i]='\0';
cout<<"new string is"<<str1;
getch();
return 0;

}