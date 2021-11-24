#include <iostream>
using namespace std;
//343 -> 343 -> palindrome
int palindrome(int n)
{
    int rev = 0, rem, org = n;
    while (n)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == org)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num;
    cout << "enter a num" << endl;
    cin >> num;
    if (palindrome(num))
    {
        cout << "it is a palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }
    return 0;
}