#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {

        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }

        for (int l = 1; l <= 2 * n - 2 * i; l++)
        {
            cout << "  ";
        }

        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {

        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }

        for (int l = 1; l <= 2 * n - 2 * i; l++)
        {
            cout << "  ";
        }

        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}