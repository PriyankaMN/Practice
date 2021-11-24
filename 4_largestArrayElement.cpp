#include <iostream>
using namespace std;
int returnMax(int arr[], int len)
{
    int max = 0;
    for (int i = 0; i <= len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    //int arr[] = {2,272,62};
    int num;
    int *arr = new int(num);
    cout << "How many elements do you wanna enter into the array?" << endl;
    cin >> num;
    cout << "Enter only " << num << " numbers" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << "Largest number in the array is : " << returnMax(arr, num);
    return 0;
}