#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
void main()
{clrscr();int a,s=5;
gotoxy(35,2);
delay(100);
cout<<"Welcome";
gotoxy(35,3);
delay(200);
cout<<"  To ";
gotoxy( 35,4);
delay(300);
cout<<" Quiz";
gotoxy(35,10);
delay(400);
cout<<"1. PLAY";
gotoxy(35,11);
delay(400);
cout<<"2. INSTRUCTIONS ";
gotoxy(35,12);
delay(400);
cout<<"3. QUIT ";
gotoxy(10,20);
delay(500);
cout<<"ENTER YOUR CHOICE ";
cin>>a;
clrscr();
switch(a){
case 2:gotoxy(35,2);
       delay(100);
       cout<<"Instructions "<<endl;

       cout<<endl<<"1. THIS IS MULTIPLE CHOICE QUESTION TYPE QUIZ "<<endl;
       cout<<"2. THERE ARE TOTAL 10 QUESTIONS "<<endl;
       cout<<"3. EVERY QUESTION HAS 4 CHOICES "<<endl;
       cout<<"4. +10 FOR THE RIGHT ANSWERS AND -2 FOR THE WRONG ANSWERS "<<endl;
       cout<<"5. PRESS ENTER FOR EXIT ";
       cin>>s;
       exit(0);
}getch();       }


