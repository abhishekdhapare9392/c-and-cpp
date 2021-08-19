#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char s[80];
    fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        puts("Cannot open file");
        printf("%s\n", s);
    }
    while (fgets(s, 79, fp) != NULL)
        printf("%s", s);
    fclose(fp);
}