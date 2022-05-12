#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void welcome_screen()
     {
	clrscr();
	textbackground(16);
	gotoxy(12,10);
	cputs("**************** W E L C O M E  *********************** ");
	gotoxy(10,12);
	cputs("*** H O L Y    C H I L D    P U B L I C    S C H O O L *** " );
	gotoxy(10,14);
	textcolor(RED);
	cputs(" T E L E P H O N E  M A N A G E M E N T  S O F T W A R E  ");
	gotoxy(28,16);
	textcolor(CYAN+BLINK);
	cputs(" D O N E  B Y :  ");
	gotoxy(50,20);
	cputs("MUKUL BHARDWAJ");
	gotoxy(10,25);
	textcolor(WHITE+BLINK);
	cputs(" *** PRESS ANY KEY TO CONTINUE***");
	getch();
	return;
     }
class directory
     {
       public:
	       int record;
	       long pn1;
	       char pn2[10];
	       int age;
	       char address1[50];
	       char address2[50];
	       char occupation[20];
	       char name[20];
	       char emailadd[25];
	       char internetadd[25];
	       }obj,obj1;
	       void modification();
	       void addition();
	       void deleate();
	       void menu();
	       void search();
	       void view1();
	       void display();
	       void view();
	       char check(char *);
	       int test();


int test()    //FIND NO. OF RECORDS
    {
      ifstream fin;
      fin.open("heera",ios::binary|ios::in);
      fin.seekg(0,ios::end);
      int n;
      n=fin.tellg()/sizeof(obj);
//      cout<<" \n NUMBER OF RECORDS = "<<n ;
      return n ;
    }
void search()  //SEARCHING FOR A PARTICULAR NUMBER
    {
      ifstream fin;
      fin.open("heera",ios::binary|ios::in);
      if(fin.fail())
	{
	  cout<<" \n FILE NOT FOUND ";
	  getch();
	  return;
	}
      clrscr();
      textcolor(BLACK+BLINK);
      gotoxy(30,1);
      cprintf(" [SEARCHING] ");
      cout<<" \n ENTER PHONE NUMBER TO BE SEARCHED : ";
      long pn;
      cin>>pn;
      int n;
      n=test();
      int flag=0;
      for(int i=0;i<n;i++)
	{
	  fin.read((char*)&obj,sizeof(obj));
	  if(pn==obj.pn1)
	    {
	      view1();
	      flag=1;
	      break;
	    }
	}
      if(flag==0)
	{
	  cout<<" \n RECORD NOT FOUND ";
	  getch();
	}
     fin.close();
    }

void addition()  //ADDING  INFORMATION
    {
      clrscr();
      char ch;
      textcolor(BLACK+BLINK);
      gotoxy(30,1);

      ofstream fout;
      fout.open("heera",ios::binary|ios::app);

      ifstream fin;
      fin.open("heera",ios::binary|ios::in);

      cprintf(" [ADDITION] ");
      textcolor(BLACK);
      cout<<" \n ENTER HOUSE PHONE NUMBER : ";
      cin>>obj.pn1;
      int flag=0;
      while(fin.read((char *)&obj1,sizeof(obj1)))
      {
      if(obj.pn1==obj1.pn1)
      {
      flag=1;
      cout<<" \n Matching record already exist";
      getch();
      break;
      }
      }
      if(flag==0)
      {
      cout<<" \n ENTER OFFICE PHONE NUMBER : ";
      cin>>obj.pn2;
      // ch=cin.get();
      cin.get(ch);
      cout<<" \n ENTER NAME : ";
      cin.getline(obj.name,20,'\n');
      cout<<" \n ENTER THE OCCUPATION : ";
      cin.getline(obj.occupation,20,'\n');
      cout<<" \n ENTER HOUSE ADDRESS : ";
      cin.getline(obj.address1,50,'\n');
      cout<<" \n ENTER OFFICE ADDRESS : ";
      cin.getline(obj.address2,50,'\n');
      cout<<" \n ENTER EMAIL ADDRESS : ";
      cin.getline(obj.emailadd,25,'\n');
      cout<<" \n ENTER INTERNET ADDRESS : ";
      cin.getline(obj.internetadd,25,'\n');
      fout.write((char*)&obj,sizeof(obj));
      cout<<"\n  Record added";
      getch();
      }
      fin.close();
      fout.close();
    }

void view1() //TO DISPLAY ALL THE RECORDS
    {
      cout<<"\n";
      cout<<" PHONE NUMBER1    :\t"<<obj.pn1<<"\n\n";
      cout<<" PHONE NUMBER2    :\t"<<obj.pn2<<"\n\n";
      cout<<" NAME             :\t"<<obj.name<<"\n\n";
      cout<<" HOUSE ADDRESS    :\t"<<obj.address1<<"\n\n";
      cout<<" OCCUPATION       :\t"<<obj.occupation<<"\n\n";
      cout<<" OFFICE ADDRESS   :\t"<<obj.address2<<"\n\n";
      cout<<" EMAIL ADDRESS    :\t"<<obj.emailadd<<"\n\n";
      cout<<" INTERNET ADDRESS :\t"<<obj.internetadd<<"\n\n";
      getch();
    }
void modification() //TO MODIFY ANY DATA IN  THE RECORD IF NECESSARY
   {
     clrscr();
     textcolor(BLACK+BLINK);
     gotoxy(30,1);
     cprintf(" [ MODIFICATION ] ");
     textcolor(BLACK);
     long pn;
     fstream fin;
     fin.open("heera",ios::binary|ios::in|ios::out|ios::ate);
     if(fin.fail())
       {
	 cout<<"\n FILE NOT FOUND !";
	 getch();
	 fin.close();
	 exit(-1);
       }

   char ch;
   cout<<"\n ENTER PHONE NUMBER :";
   cin>>pn;
   ch=cin.get();
   int flag=0;
   fin.seekg(0,ios::beg);
   while(fin.read((char*)&obj,sizeof(obj))&&flag==0)
   {
	   if(pn==obj.pn1)
	      {
		view1();

		if(check("HOUSE PHONE NUMBER ")=='y')
		  {
		    cout<<"\n ENTER NEW PHONE NUMBER :";
		    cin>>obj.pn1;
		    ch=cin.get();
		  }
		if(check("OFFICE PHONE NUMBER ")=='y')
		  {
		    cout<<"\n ENTER NEW PHONE NUMBER :";
		    cin>>obj.pn2;
		   ch=cin.get();
		  }
		if(check("NAME")=='y')
		  {
		    cout<<"\n ENTER NEW NAME : ";
		    cin.getline(obj.name,20,'\n');
		  }
		if(check("HOME ADDRESS")=='y')
		  {
		    cout<<"\n ENTER NEW ADDRESS :";
		    cin.getline(obj.address1,50,'\n');
		  }
		if(check("OFFICE ADDRESS")=='y')
		  {
		    cout<<"\n ENTER NEW ADDRESS :";
		    cin.getline(obj.address2,50,'\n');
		  }
		if(check("EMAIL ADDRESS:")=='y')
		  {
		    cout<<"\n ENTER NEW MAIL ADDRESS :";
		    cin.getline(obj.emailadd,25,'\n');
		  }
		if(check("INTERNET ADDRESS")=='y')
		  {
		    cout<<"\n ENTER NEW INTERNET ADDRESS :";
		    cin.getline(obj.internetadd,25,'\n');
		  }
	      int pos=fin.tellg()-sizeof(obj1);
	      fin.seekp(pos,ios::beg);
	      fin.write((char*)&obj,sizeof(obj));
	      cout<<"\n Record updated";
	      getch();
	      flag=1;
	      }
	}
	if(flag==0)
	{
	cout<<"\n Matching record not found";
	getch();
	}
   fin.close();
    }

char check(char *s)
    {
       cout<<"\n MODIFY \t "<<s<<"\t"<<"Y/N";
       char ch;
      ch =getch();
      //cin.get(ch);
      if((ch=='y')||(ch=='Y'))
	return 'y';
       else
	return 'n';
    }
void deleate()
    {
       clrscr();
       window(1,1,80,25);
       textcolor(BLACK+BLINK);
       gotoxy(30,1);
       cprintf("[DELETION]");
       long pn;
       int n,i;
       ifstream fin;
       ofstream fout;
       fin.open("heera",ios::binary|ios::in);
       if(fin.fail())
	{
	  cout<<"\n FILE NOT FOUND ! ";
	  getch();
	  return;
	}
       fout.open("new",ios::binary|ios::out);
       n=test();
       if(n==0)
	{
	  cout<<"\n FILE IS EMPTY ! ";
	  getch();
	  return;
	}
	cout<<" \n  ENTER HOUSE PHONE NUMBER WHOSE RECORD IS TO BE DELETED";
	cin>>pn;
	int flag=0;

      for(i=0;i<n;i++)
	{
	  fin.read((char*)&obj,sizeof(obj));
	  if(pn==obj.pn1)
	  flag=1;
	  else
	  fout.write((char*)&obj,sizeof(obj));
	}
      fin.close();
      fout.close();

      remove("heera");
      rename("new","heera");
      if(flag==1)
	    cout<<"\n    RECORD DELETED";
      else
	 cout<<"\n RECORD NOT FOUND";
  getch();
  }
 void view()
   {
     ifstream fin;
     int n,j;
     fin.open("heera",ios::binary|ios::in);
     if(fin.fail()||fin.bad())
       {
	  cout<<"\n FILE NOT FOUND ! ";
	  getch();
	  return;
       }
     clrscr();
     int i=0;
     n=test();
     for(j=0;j<n;j++)
       {
       clrscr();
	 cout<<"\n RECORD "<<i+1<<"\n\n";
	 fin.read((char*)&obj,sizeof(obj));
	 cout<<"\n";
      cout<<" PHONE NUMBER1    :\t"<<obj.pn1<<"\n\n";
      cout<<" PHONE NUMBER2    :\t"<<obj.pn2<<"\n\n";
      cout<<" NAME             :\t"<<obj.name<<"\n\n";
      cout<<" HOUSE ADDRESS    :\t"<<obj.address1<<"\n\n";
      cout<<" OCCUPATION       :\t"<<obj.occupation<<"\n\n";
      cout<<" OFFICE ADDRESS   :\t"<<obj.address2<<"\n\n";
      cout<<" EMAIL ADDRESS    :\t"<<obj.emailadd<<"\n\n";
      cout<<" INTERNET ADDRESS :\t"<<obj.internetadd<<"\n\n";
      getch();
	 i+=1;
       }
      fin.close();
   }

void  menu()
    {
       char ch;
       clrscr();
       textcolor(WHITE);
       gotoxy(20,6);
       cout<<"***************************************";
       gotoxy(30,8);
       cprintf(" A: ADDITION ");
       gotoxy(30,9);
       cprintf(" D: DELETION \n  \r ");
       gotoxy(30,10);
       cprintf(" M: MODIFICATION \n \r ");
       gotoxy(30,11);
       cprintf(" V: VIEW \n \r ");
       gotoxy(30,12);
       cprintf(" S: SEARCH \n \r ");
       gotoxy(30,13);
       cprintf(" E: EXIT \n \r ");
       gotoxy(20,15);
       cout<<"***************************************";

       ch=getch();

      switch(ch)
	   {
	     case 'a':
	     case 'A':
		addition();
		break;
	     case 'd' :
	     case 'D' :
		deleate();
		break;
	     case 'm':
	     case 'M':
		modification();
		break;
	     case 'v':
	     case 'V':
		view();
		break;
	     case 's':
	     case 'S':
		search();
		break;
	     case 'e':
	     case 'E':
		system("cls");
		exit(0);
	 }
}
int main()
    {
      welcome_screen();
      for(;;)
      menu();
      return 0;
   }