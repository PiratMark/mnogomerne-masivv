#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    /*
   int size;
   cout << "введите размер строки массива" << endl;
   cin >> size;
   cout << "введите первый элемент" << endl;
   int first;
   cin >> first;
   int** arr = new int* [size];
   for (int i = 0; i < size; i++)
   {
       arr[i] = new int[size];
       for (int j = 0; j < size; j++)
       {
           arr[i][j] = first;
           first *= 2;
           cout << arr[i][j] << " ";
       }
       cout << endl;
   }
   */

  int r;
  cout << "rows: ";
  cin>>r;
  int c ;
  cout << "cols: ";
  cin>>c; cout << endl;
  int n; cout << "Enter the number: ";
  cin>>n; cout << "mass:";
  cout << endl;
  int arr[c][r];
  int r2 = 0, c2 = 0;
  for (int r2 = 0; r2 < r; r2++)
  {
      for (int c2 = 0; c2 < c; c2++)
      {
          arr[r2] [c2] = n;
          n=n+1;
          cout<<arr[r2] [c2];
          cout<<" ";
      } cout << endl;
  } 
  return 0; 




}