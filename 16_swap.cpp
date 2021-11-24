#include <iostream>
using namespace std;

void swapWithTemp(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//we use pointers so that we can return multiple outputs from a function.
//it will refer memory space of the value : pass value by reference
void swapWithOutTemp(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a, b, ch;
    cout << "1.swap with temp  2.swap wit out temp" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "enter a and b" << endl;
        cin >> a >> b;
        swapWithTemp(&a, &b);
        cout << a << " " << b;
    }
    else if (ch == 2)
    {
        cout << "enter a and b" << endl;
        cin >> a >> b;
        swapWithOutTemp(&a, &b);
        cout << a << " " << b;
    }
    else
    {
        cout << "1 or 2..";
    }
    return 0;
}