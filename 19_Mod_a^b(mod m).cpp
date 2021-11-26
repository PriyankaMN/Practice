#include <iostream>
using namespace std;

int mod(int a, int b, int m)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b % 2 == 0)
    {
        return mod(a * a % m, b / 2, m);
    }
    else
    {
        return (a * mod(a * a % m, (b - 1) / 2, m)) % m;
    }
}
int main()
{
    int a, b, m;
    cout << "enter a,b,m" << endl;
    cin >> a >> b >> m;
    cout << mod(a, b, m);
    return 0;
}

//a^b(mod m) = ?
//o(log b)
//formula : (a^2 % m) ^ (b/2) % m -> b is even
//formula : (a * (a^2 % m) ^ (b-1/2) % m) -> b is odd