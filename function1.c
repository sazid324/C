#include <stdio.h>
#include <math.h>

float cal(int x, int n);
int fact(int y);

int main()
{
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("F(x) = %f", cal(x, n));

    return 0;
}

int fact(int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return y * fact(y - 1);
    }
}

float cal(int x, int n)
{
    int s = -1, j = 0;
    float sum = 0.0;

    for (int i = 1; i <= n; i = i + 2)
    {
        sum = sum + pow(s, j) * pow(x, i) / fact(i);
        j++;
    }

    return sum;
}