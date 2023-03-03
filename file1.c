#include <stdio.h>

int main()
{
    int num, quan;
    float pri, val;
    char itNam[20];

    FILE *fptr;
    fptr = fopen("INVENTORY.txt", "w");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter %dno Item_name, Number, Price, Quantity: ", (i + 1));
        scanf("%s %d %f %d", itNam, &num, &pri, &quan);
        fprintf(fptr, "%s %d %f %d", itNam, num, pri, quan);
    }

    fclose(fptr);

    fptr = fopen("INVENTORY.txt", "r");

    printf("Item Number Price Quantity value\n");

    for (int i = 0; i < 3; i++)
    {
        fscanf(fptr, "%s %d %f %d", itNam, &num, &pri, &quan);
        val = pri * quan;
        printf("%s\t %4d\t %.2f\t %d\t %.2f\n", itNam, num, pri, quan, val);
    }

    fclose(fptr);

    return 0;
}