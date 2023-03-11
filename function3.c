#include <stdio.h>

void sort(int n, int arr[n]);

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dno number of this array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sort(n, arr);

    return 0;
}

void sort(int n, int arr[n])
{
    int temp, x, i;

    for (x = 1; x < n; x++)
    {
        for (int i = 0; i < (n - x); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
