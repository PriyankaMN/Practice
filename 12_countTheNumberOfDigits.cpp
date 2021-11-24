#include <iostream>
using namespace std;

int countNumber(int n)
{
    int c = 0;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    return c;
}

int main()
{
    int num;
    cout << "Enter a number, I will count it for you!" << endl;
    cin >> num;
    cout << countNumber(num);
    return 0;
}