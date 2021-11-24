#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many lines of starts you want?" << endl;
    cin >> n;

    //uncomment accordingly

    /*
    * * * * * * * 
    * * * * * * 
    * * * * * 
    * * * * 
    * * * 
    * * 
    * 

    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    */

    /*
        *
       **
      ***
     ****
    *****

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= (n - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    */
    /*
          *
         * *
        * * *
       * * * *
      * * * * *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= (n - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    */
    /*
    **** 
    ***
    **
    *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i + j >= (n - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    */

    /*
    00000
    1   1
    2   2
    3   3
    44444

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    } */
    return 0;
}