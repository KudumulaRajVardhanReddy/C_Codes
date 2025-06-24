#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char redStr[50];
    char redChr[50];

    int i = 0;

    FILE *brh = NULL;
    brh = fopen("file.txt", "r");

    if (brh == NULL)
    {
        printf("\nError\n");
        exit(1);
    }

    fgets(redStr, 21, brh);

    while (!feof(brh))
    {
        redChr[i] = fgetc(brh);
        i++;
    }
    
    printf("%s", redStr);
    printf("%s", redChr);

    return 0;
}