#include <stdio.h>

int main() {
    int n;
    printf("\nEnter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<20-i; j++) printf(" ");
        for(int j=1; j<=i; j++) printf("%2d", i);
        printf("\n");
    }
    

    return 0;
}