#include <iostream>
using namespace std;

string solve(string A)
{
    int n = A.length();
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 'a')
        {
            return ('a');
        }
        else if (A[i] == 'e')
        {
            return 'e';
        }
        else if (A[i] == 'i')
        {
            return 'i';
        }
        else if (A[i] == 'o')
        {
            return 'o';
        }
        else if (A[i] == 'u')
        {
            return 'u';
        }
    }
}

int main()
{
    cout << solve("abcdye");
    return 0;
}