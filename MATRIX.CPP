#include <iostream.h>
#include <conio.h>
void main()
{
  clrscr();
  int A[10][10], r, c, B[10][10], a, b, i, j, k, C[10][10];
  cout << "Enter the rows and columns for A";
  cin >> r >> c;
  cout << "enter the rows and columns for B ";
  cin >> a >> b;
  if (c == a)
  {
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < r; j++)
        cout << "enter the element";
      cin >> A[i][j];
    }

    for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
        cout << "enter the element";
      cin >> B[i][j];
    }
    for (i = 0; i < r; i++)
    {
      for (j = 0; j < b; j++)
      {
        C[i][j] = 0;
        for (k = 0; k < c; k++)
          C[i][j] += A[i][k] * B[k][j];
        cout << C[i][j];
      }
    }
  }
  else
    cout << "invalid input";
  getch();
  return;
}