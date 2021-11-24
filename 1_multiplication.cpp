#include <iostream>
using namespace std;

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " * " << n << " = " << i * n << endl;
    }
}

int main()
{
    int num;
    cout << "enter the value of number, whose multiplication table is to be printed" << endl;
    cin >> num;
    table(num);
    return 0;
}