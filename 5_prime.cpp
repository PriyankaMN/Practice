#include <iostream>
using namespace std;

int isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, ch;
    cout << "1. series of prime number or 2. just for the number" << endl;
    cin >> ch;
    cout << "enter the number" << endl;
    cin >> n;
    if (ch == 1)
    {
        for (int i = 0; i <= n; i++)
        {
            if (isprime(i))
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        int i = 19;
        if (isprime(i))
        {
            cout << i << " is prime no.";
        }
        else
        {
            cout << i << " is not a prime no.";
        }
    }
}
