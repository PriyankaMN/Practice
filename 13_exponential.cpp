#include <iostream>
using namespace std;

int exponential(int m, int n)
{
    long long int val = 1;
    for (int i = 0; i < n; i++)
    {
        val = val * m;
    }
    return val;
}

int main()
{
    int num, expo;
    cout << "Enter a number and expo" << endl;
    cin >> num >> expo;
    cout << exponential(num, expo);
    return 0;
}