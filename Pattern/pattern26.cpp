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
    for (int j = 1; j <= i; j++)
    {

      cout <<j<<" ";
    }
    for (int l = i-1; l >= 1; l--)
    {
      cout <<l<<" ";
    }
    
    cout << endl;
  }

  return 0;
} 