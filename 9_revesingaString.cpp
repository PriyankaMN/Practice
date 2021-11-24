#include <iostream>
using namespace std;

void reversingaString(char s[])
{
    char temp;
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < (len / 2 - 1); i++)
    {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    cout << s;
}

int main()
{
    char s[] = "Priya";
    reversingaString(s);
    return 0;
}