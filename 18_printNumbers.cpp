#include <iostream>
using namespace std;

int isprime(int i)
{
    for (int j = 2; j * j <= i; j++)
    {
        if (i % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

void compositNumber(int num)
{
    // numbers which are not prime
    for (int i = 0; i < num; i++)
    {
        if (isprime(i) == 0 & i != 1)
        {
            cout << i << " ";
        }
    }
}

void factor(int n)
{
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int lcm(int a, int b)
{
    /*a*b = lcm(a,b) * gcd(a,b) */
    int lcm;
    // a is greater
    if (a > b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            return lcm;
            break;
        }
        else
        {
            lcm++;
        }
    }
    return 0;
}

int main()
{
    int num, a, b, ch;
    cout << "1.compositNumber  2.factor  3.gcd  4.lcm" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "Enter a number" << endl;
        cin >> num;
        compositNumber(num);
    }
    else if (ch == 2)
    {
        cout << "Enter a number" << endl;
        cin >> num;
        factor(num);
    }
    else if (ch == 3)
    {
        cout << "Enter a and b numbers" << endl;
        cin >> a >> b;
        cout << "gcd " << a << " and " << b << " are: " << gcd(a, b);
    }
    else if (ch == 4)
    {
        cout << "Enter a and b numbers" << endl;
        cin >> a >> b;
        cout << "lcm " << a << " and " << b << " are: " << lcm(a, b);
    }
    return 0;
}