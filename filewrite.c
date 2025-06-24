#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[50];

    printf("\nEnter a string: ");
    gets(str);

    FILE *fp;
    fp = fopen("file.txt", "w");

    if (fp == NULL) printf("\nError.\n");
    

    fputc('a', fp);

    fclose(fp);

    fp = fopen("file.txt", "a");
    fputs(str, fp);

    fclose(fp);

    fp = fopen("file.txt", "a");
    fprintf(fp, "%s %d", "Hello", 5);

    fclose(fp);

    return 0;
}
