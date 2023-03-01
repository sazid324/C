#include <stdio.h>
#include <string.h>

struct studentData
{
    char name[100];
    int sub[3];
    int total;
};

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct studentData std[n];

    for (int i = 0; i < n; i++)
    {
        char nam[100];
        std[i].total = 0;

        printf("Enter the name of the student no %d: ", (i + 1));
        scanf("%s", nam);
        strcpy(std[i].name, nam);

        for (int j = 0; j < n; j++)
        {
            printf("Enter the marks of %d subject of this student: ", (j + 1));
            scanf("%d", &std[i].sub[j]);
            std[i].total += std[i].sub[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("Information of student no %d is: \n", (i + 1));
        printf("Name : %s\n", std[i].name);
        for (int j = 0; j < n; j++)
        {
            printf("Marks of subject %d : %d\n", (j + 1), std[i].sub[j]);
        }
        printf("Total : %d\n", std[i].total);
    }

    return 0;
}