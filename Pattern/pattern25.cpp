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
    for (int k = 1; k <= sidelen - i; k++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i * 2 - 1; j++)
    {

      cout << "* ";
    }
    cout << endl;
  }

  return 0;
} 