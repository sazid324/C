#include <stdio.h>

int main()
{
    char ch;

    FILE *file1, *file2;
    file1 = fopen("firstf.txt", "a");
    file2 = fopen("secondf.txt", "r");

    ch = fgetc(file2);

    while (ch != EOF)
    {
        putc(ch, file1);
        ch = fgetc(file2);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}