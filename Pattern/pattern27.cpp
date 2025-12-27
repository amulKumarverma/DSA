#include <iostream>
using namespace std;
int main()
{
  int sidelen;
  cout << "print pyramid \n";

  cout << "enter the no of rows:- ";
  cin >> sidelen;

  for (int i = 1; i <= sidelen; i++)
  {
    for (int k = 1; k <=i-1; k++)
    {
      cout << "  ";
    }
    for (int j = i; j <= sidelen * 2 - i; j++)
    {

      cout << "* ";
    }
    cout << endl;
  }

  return 0;
} 