// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int l = 1; l < i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n - 4; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << " ";
        }
        for (int k = n ; k >= i; k--)
        {
            cout << "*";
        }
        for (int l = n ; l > i +2; l--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n - 4; i++)
    {
        for (int j = n; j >= i + 2; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int l = 1; l <= i + 3; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}