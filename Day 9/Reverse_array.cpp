#include<iostream>
using namespace std;

void ReverseArray (int nums[], int n)
{
    int  = 0
    int end = n-1;

    while (i<j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++
    }
}
int main()
{
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    ReverseArray(arr, size);

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}