#include <iostream>
using namespace std;

void decimalToBinary(int n)
{
    int rem, a[10], i = 0;
    while (n)
    {
        rem = n % 2;
        n = n / 2;
        a[i] = rem;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j] << " ";
    }
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    decimalToBinary(num);
    return 0;
}