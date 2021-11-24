#include <iostream>
using namespace std;

//basic

int main()
{
    int n;
    cout << "How many lines of starts you want?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}