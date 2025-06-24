#include <stdio.h>
#include <stdlib.h>

int minpos(int x[], int n) {

    int min = x[0];
    for (int i = 0; i < n; i++)
    {
        if (min > x[i])
        {
            min = x[i];
        }
    }
    return min;
}

int main() {

    int s, n;

    printf("\nEnter Size of Array : ");
    scanf("%d", &s);

    printf("\nEnter n : ");
    scanf("%d", &n);

    int x[s];

    printf("\nEnter values of Array :\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &x[i]);
    }

    int res = minpos(x, n);
    printf("\nIt's %d.\n", res);

    return 0;
}
