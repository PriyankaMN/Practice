#include <iostream>
using namespace std;

void sumOfNaturalNumbers(int n)
{
    int sum = 0;
    /* for (int i = 0; i <= n; i++) -- O(n)
    {
        sum +=i;
    } */
    sum = (n * n + n) / 2; //-- O(1)
    cout << sum;
}

int main()
{
    int num;
    cout << "Enetr the last natural number you want the sum of" << endl;
    cin >> num;
    sumOfNaturalNumbers(num);
    return 0;
}