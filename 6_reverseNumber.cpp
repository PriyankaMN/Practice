#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;         //last digit of the number
        rev = rev * 10 + rem; //add last degit
        n = n / 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter a number, I will reverse it for you!" << endl;
    cin >> num;
    cout << reverseNumber(num);
    return 0;
}