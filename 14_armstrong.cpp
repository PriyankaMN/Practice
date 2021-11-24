#include <iostream>
using namespace std;
//input 371
//3^3 + 7^3 + 1^3 = 371 -> amstrong no.

int amstro(int n)
{
    int rem, res = 0;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        res = res + rem * rem * rem;
    }
    return res;
}

int main()
{
    int num, ch;
    cout << "1.series 2.one no." << endl;
    cin >> ch;

    if (ch == 2)
    {
        cout << "Enter a number" << endl;
        cin >> num;
        if (amstro(num) == num)
        {
            cout << "amstom!!";
        }
        else
        {
            cout << "not an amstorm";
        }
    }

    else if (ch == 1)
    {
        cout << "Enter a number" << endl;
        cin >> num;
        for (int i = 0; i <= num; i++)
        {
            if (amstro(i) == i)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        cout << "choose either 1 or 2." << endl;
    }
    return 0;
}