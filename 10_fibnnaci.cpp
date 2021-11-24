//program to print fibonacci series without using recursion and using recursion.
//Input : 10
//Output 0 1 1 2 3 5 8 13 21 34

#include <iostream>
using namespace std;
void fibnacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        fibnacci(n - 1);
    }
}

int main()
{
    int n = 10;
    cout << 0 << " " << 1 << " ";
    fibnacci(n - 2);
    return 0;
}
