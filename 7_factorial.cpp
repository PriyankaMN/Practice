#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    cout << "factorial is" << factorial(num);
    //itrative is used when time complexity needs to be balanced against an expanded code size.
    //Recursion -> Very high(generally exponential) time complexity.
    return 0;
}