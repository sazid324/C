#include <stdio.h>

int sort(int arr[], int n);

int main()
{
    int arr[8] = {10, 13, 14, 21, 54, 12, 20, 65};
    sort(arr, 8);

    for (int j = 0; j < 8; j++)
    {
        printf("%d\t", arr[j]);
    }

    return 0;
}

int sort(int arr[], int n)
{
    int temp, pass = 1;

    for (pass = 1; pass < n; pass++)
    {
        for (int i = 0; i < (n - pass); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}