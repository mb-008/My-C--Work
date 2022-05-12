#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
void main()
{       clrscr();
	textcolor(CYAN);
	int x=0,y;
	char ch2;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	gotoxy(35,2);
	delay(500);
	cout<<"WELCOME";
	gotoxy(37,3);
	delay(500);
	cout<<"TO";
	gotoxy(36,4);
	delay(500);
	cout<<"QUIZ";
	gotoxy(53,12);
	delay(500);
	circle(445,200,70);
	cout<<"1. PLAY "<<endl;
	gotoxy(53,13);
	delay(500);
	cout<<"2. EXIT "<<endl;
	int left=0,top=90;
	int right=300,bottom=275;
	rectangle(left,top,right,bottom);
	gotoxy(10,8);
	delay(300);
	cout<<"INSTRUCTIONS"<<endl;
	gotoxy(1,10)   ;
	delay(300);
	cout<<" There are total 3 rounds "<<endl;
	cout<<" +10 for every right answer "<<endl<<"  in round 1 and 2 "<<endl;
	cout<<" 3rd round is 'THE BONUS ROUND'"<<endl<<"  +30 for the right answer"<<endl;
	cout<<" Every question has 3 choices "<<endl;
	gotoxy(2,20);
	delay(500);
	cout<<"Enter Your Choice as 1 or 2 ";
	cin>>y;
	clrscr();
	switch(y){
case 1: gotoxy(35,2);
	delay(500);
	cout<<"ROUND 1"<<endl;
cout<<"\nQUES1: Who is the developer of C++ ?"<<endl;
cout<<"\na. DENNIS RITCHIE "<<endl;
cout<<"b. BJARNE STROUSTRUP "<<endl;
cout<<"c. JAMES GOSLING"<<endl;
	cin>>ch2;
	if(ch2=='b'||ch2=='B')
	{
		x=x+10;
		cout<<"Good Job. Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"\nQUES2: Who is the father of internet ? "<<endl;
cout<<"\na. VINT CERF"<<endl;
cout<<"b. TIM BERNERS LEE "<<endl;
cout<<"c. CHARLES BABBAGE "<<endl;
	cin>>ch2;
	if(ch2=='a'||ch2=='A')
	{
		x=x+10;
		cout<<"Good Job.Your score is :"<<x;

	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();

	cout<<"\nQUES3: Who is the inventor of keyboard ?"<<endl;
cout<<"\na. HERMEN HOLLERITH"<<endl;
cout<<"b. PAUL BARREN    "<<endl;
cout<<"c. ALUN SHUGART"<<endl;
	cin>>ch2;
	if(ch2=='a'||ch2=='A')
	{
		x=x+10;
		cout<<"Good Job. Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"\nQUES4: Which company made the first moble phone ?   "<<endl;
cout<<"\na. BELL LABORATORIES "<<endl;
cout<<"b. ORACLE CORPORATION    "<<endl;
cout<<"c. IBM   "<<endl;
	cin>>ch2;
	if(ch2=='c'||ch2=='C')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;
}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
cout<<"\nQUES5: Which computer engineer got the nobel prize for literature in 2003 ?"<<endl;
cout<<"\na. J.M.COETZEE   "<<endl;
cout<<"b. SABIR BHATIA "<<endl;
cout<<"c. G.M. HOPPER"<<endl;
	cin>>ch2;
	if(ch2=='a'||ch2=='A')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	gotoxy(35,2);
	delay(500);
	cout<<"ROUND 2 "<<endl;
	gotoxy(0,0);
	delay(500);
	cout<<"\nQUES1: Who is the father of computer ethics ? "<<endl;
cout<<"\na. ADAM OSBORNE "<<endl;
cout<<"b. ATANSOFF"<<endl;
cout<<"c. NORBET WEINER"<<endl;
	cin>>ch2;
	if(ch2=='c'||ch2=='C')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"\nQUES2: In which year MS OFFICE was lauch ?"<<endl;
cout<<"\na.1989"<<endl;
cout<<"b.1969"<<endl;
cout<<"c.1996"<<endl;
cin>>ch2;
	if(ch2=='a'||ch2=='A')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"\nQUES3: What is the name of the first android smartphone ?"<<endl;
cout<<"\na. SAMSUNG"<<endl;
cout<<"b. IBM"<<endl;
cout<<"c. HTC"<<endl;
	cin>>ch2;
	if(ch2=='c'||ch2=='C')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"\nQUES4: Who is the father of computer science ?"<<endl;
cout<<"\na.EDWARD ROBERT"<<endl;
cout<<"b.ALLEN TURING  "<<endl;
cout<<"c.ELBERT EINSTIEN "<<endl;
	cin>>ch2;
	if(ch2=='b'||ch2=='B')
	{
		x=x+10;
		cout<<"Good job. Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"\nQUES5: Which is the first graphical game ?"<<endl;
cout<<"\na. ASHPHALT "<<endl;
cout<<"b. SNAKE"<<endl;
cout<<"c. TIC TAC TOE    "<<endl;

	cin>>ch2;
	if(ch2=='c'||ch2=='A')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;

	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	gotoxy(35,2);
	delay(500);
	cout<<"ROUND 3 ";
	gotoxy(31,4);
	delay(500);
	cout<<"THE BONUS ROUND "<<endl;
	gotoxy(0,0);
	delay(500);
	cout<<"QUES1: Who is the co founder of MICROSOFT along with BILL GATES ?"<<endl;
	cout<<"\na. ELON MUSK "<<endl;
	cout<<"b. ROBERT TAYLOR "<<endl;
	cout<<"c. PAUL ALLEN "<<endl;
	cin>>ch2;
	if(ch2=='c'||ch2=='C')
	{x=x+30;
	cout<<"Awesome. Your score is "<<x;}
	else
	cout<<"Sorry wrong answer ";
	getch();
	clrscr();
	cout<<"\nQUES2: What is the name of our computer teacher ?"<<endl;
	cout<<"\na. RUCHIKA VOHRA "<<endl;
	cout<<"b. SONIKA NARULA"<<endl;
	cout<<"c. VANDANA KATHURIA"<<endl;
	cin>>ch2;
	if(ch2=='a'||ch2=='A')
	{x=x+30;
	cout<<"Awesome. Your score is :"<<x<<endl;}
	else
	cout<<"Sorry wrong answer "<<endl;
	getch();
	clrscr();
	if(x==160)
	{gotoxy(25,10);
	cout<<"No cheating...... You have done this earlier also.";   }
	else
	{if(x>=130&&x<160)
	{gotoxy(25,10);
	cout<<"You are extremely intelligent  Your Score is "<<x; }
	else
	{if(x>=100&&x<130)
       { gotoxy(25,10);
	cout<<"You are intelligent  Your Score is "<<x;   }
	else
	{if(x>=50&&x<100)
	{gotoxy(25,10);
       cout<<"You are average Your Score is "<<x;
	gotoxy(25,11);
	cout<<" Better luck next time";  }
	else
	 {if(x<50)
	 {gotoxy(25,10);
	cout<<"No use........ Not even 5 questions right";   }}}}}
	getch();
	clrscr();
	gotoxy(31,10);
	delay(100);
	cout<<"THANKS FOR PLAYING    ";
	gotoxy(30,12);
	cout<<"CREDITS : Mukul & Nishant & Aman";
	getch();
	break;
case 2: exit(0);
}
}