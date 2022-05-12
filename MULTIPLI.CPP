#include<iostream.h>
#include<conio.h>
int  main(){clrscr();
int A[30][30],B[30][30],C[100][100],r,c,a,b,i,j,k;
cout<<"Enter rows and columns for A matrix"<<endl;
cin>>r>>c;
cout<<"Enter rows and columns for B matrix"<<endl;
cin>>a>>b;
if(c==a)
{cout<<"Enter the elements of A";
for(i=0;i<r;i++)
 for(j=0;j<c;j++)
   cin>>A[i][j];
cout<<"Enter the elemnts of B";
for(i=0;i<r;i++)
 for(j=0;j<c;j++)
  cin>>B[i][j];

cout<<"product of two matrices";
for(i=0;i<r;i++)
 {cout<<"\n";
   for(j=0;j<b;j++)
   {C[i][j]=0;
    for(k=0;k<c;k++)
       C[i][j]=C[i][j]+A[i][k]*B[k][j];
       cout<<C[i][j]<<" ";
    }
  }
}
else
cout<<"Matrices not compatible for multiplication";
getch();

return 0;
}



