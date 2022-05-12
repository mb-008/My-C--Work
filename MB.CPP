#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{       clrscr();
	int x=0;
	char ch2;
	gotoxy(35,2);
	delay(500);
	cout<<"WELCOME";
	gotoxy(37,3);
	delay(500);
	cout<<"TO";
	gotoxy(36,4);
	delay(500);
	cout<<"QUIZ";
	gotoxy(35,15);
	delay(500);
	cout<<"1. PLAY "<<endl;
	gotoxy(35,16);
	delay(500);
	cout<<"2. EXIT "<<endl;
	gotoxy(3,5);
	delay(500);
	cout<<"INSTRUCTIONS"<<endl;
	gotoxy(3,6)   ;
	delay(500);
	cout<<"1.There are total 3 rounds. "<<endl;
	gotoxy(3,7);
	delay(500);
	cout<<"2.Round 1 and 2 have 5 questions each."<<endl;
	gotoxy(3,8);
	delay(500);
	cout<<"3.Each question has 3 choices."<<endl;
	gotoxy(3,9);
	delay(500);
	cout<<"4.+10 for every right answer in round 1 and 2."<<endl;
	gotoxy(3,10);
	delay(500);
	cout<<"5.Round 3 is a Bonus round and has two questions."<<endl;
	gotoxy(3,11);
	delay(500);
	cout<<"6.+30 for evry right answer in Round 3"<<endl;
	gotoxy(35,20);
	delay(500);
	cout<<"PRESS ENTER TO PLAY";
	getch();
	clrscr();
	gotoxy(35,2);
	delay(500);
	cout<<"ROUND 1"<<endl;
	delay(500);
cout<<"1. Who is the developer of C++ ?"<<endl;
cout<<"a.DENNIS RITCHIE "<<endl;
cout<<"b.BJARNE STROUSTRUP "<<endl;
cout<<"c.JAMES GOSLING"<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"Good Job. Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"2. Who is the father of internet ? "<<endl;
cout<<"a.VINT CERF"<<endl;
cout<<"b.TIM BERNERS LEE "<<endl;
cout<<"c.CHARLES BABBAGE "<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Good Job.Your score is :"<<x;

	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();

	cout<<"3. Who is the inventor of keyboard ?"<<endl;
cout<<"a.HERMEN HOLLERITH"<<endl;
cout<<"b.PAUL BARREN    "<<endl;
cout<<"c.ALUN SHUGART"<<endl;
	cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Good Job. Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"4. Which company made the first moble phone ?   "<<endl;
cout<<"a.BELL LABORATORIES "<<endl;
cout<<"b.ORACLE CORPORATION    "<<endl;
cout<<"c.IBM   "<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
cout<<"5. Which computer engineer got the nobel prize for literature in 2003 ?"<<endl;
cout<<"a.J.M.COETZEE   "<<endl;
cout<<"b.SABIR BHATIA "<<endl;
cout<<"c.G.M. HOPPER"<<endl;
	cin>>ch2;
	if(ch2=='a')
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
	cout<<"1.Who is the father of computer ethics ? "<<endl;
cout<<"a.ADAM OSBORNE "<<endl;
cout<<"b.MUKUL BHARDWAJ"<<endl;
cout<<"c.NORBET WEINER"<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"2.In which year MS OFFICE was lauch ?"<<endl;
cout<<"a.1989"<<endl;
cout<<"b.1969"<<endl;
cout<<"c.1996"<<endl;
cin>>ch2;
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"3. What is the name of the company who made the first android smartphone ?"<<endl;
cout<<"a.SAMSUNG"<<endl;
cout<<"b.IBM"<<endl;
cout<<"c.HTC"<<endl;
	cin>>ch2;
	if(ch2=='c')
	{
		x=x+10;
		cout<<"Good job.Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"4. Who is the father of computer science ?"<<endl;
cout<<"a.EDWARD ROBERT"<<endl;
cout<<"b.ALLEN TURING  "<<endl;
cout<<"c.NISHANT KUMAR "<<endl;
	cin>>ch2;
	if(ch2=='b')
	{
		x=x+10;
		cout<<"Good job. Your score is :"<<x;


	}
	else
	cout<<"Sorry wrong answer.";
	getch();
	clrscr();
	cout<<"Which is the first graphical game ?"<<endl;
cout<<"a.ASHPHALT "<<endl;
cout<<"b.SNAKE"<<endl;
cout<<"c.TIC TAC TOE    "<<endl;

	cin>>ch2;
	if(ch2=='c')
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
	cout<<"1. Who is the co founder of MICROSOFT along with BILL GATES ?"<<endl;
	cout<<"a.ELON MUSK "<<endl;
	cout<<"b.ROBERT TAYLOR "<<endl;
	cout<<"c.PAUL ALLEN "<<endl;
	cin>>ch2;
	if(ch2=='c')
	{x=x+30;
	cout<<"Awesome. Your score is "<<x;}
	else
	cout<<"Sorry wrong answer ";
	getch();
	clrscr();
	cout<<"2. What is the name of our computer teacher ?"<<endl;
	cout<<"a.VANDANA MAM"<<endl;
	cout<<"b.SONIKA MAM"<<endl;
	cout<<"c. RUCHIKA MAM "<<endl;
	cin>>ch2;
	if(ch2=='c')
	{x=x+30;
	cout<<"Awesome. Your score is :"<<x<<endl;}
	else
	cout<<"Sorry wrong answer "<<endl;
	gotoxy(35,14);
	delay(500);
	cout<<"Your total score is"<<x<<endl;
	if(x==160)
	{gotoxy(35,15);
	 delay(500);
	 cout<<"You are a Professional Quizeer."; }
	else
	 if(x==130)
	 {gotoxy(35,15);
	  delay(500);
	  cout<<"You are an Amazing Quizeer.";}
	 else
	  if(x==100)
	   {gotoxy(35,15);
	   delay(500);
	   cout<<"You are a Nice Quizeer.";    }
	  else
	    if(x>=50&&x<100)
	     {gotoxy(35,15);
	     delay(500);
	     cout<<"You are an Average Quizeer.";  }
	    else
	     if(x<=40)
	      {gotoxy(35,15);
	      delay(500);
	      cout<<"You are not a Quizeer."; }
	getch();
	clrscr();
	gotoxy(31,10);
	delay(500);
	cout<<"CREDITS : Mukul & Nishant ";
	getch();
	return;}
