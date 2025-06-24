#include <stdio.h>
#include <stdlib.h>

void multMat() {
	int r1, c1, r2, c2;

	printf("\nEnter no. of rows of M1: ");
	scanf("%d", &r1);

	printf("\nEnter no. of columns of M1: ");
	scanf("%d", &c1);

	printf("\nEnter no. of rows of M2: ");
	scanf("%d", &r2);

	printf("\nEnter no. of columns of M2: ");
	scanf("%d", &c2);

	if (c1 == r2) {

		int m1[r1][c1];
		int m2[r2][c2];

		int m3[r1][c2];

		printf("\nEnter Matrix 1 elements: ");
		printf("\n");

		for (int i=0; i<r1; i++) {
			for (int j=0; j<c1; j++) {
				scanf("%d", &m1[i][j]);
			}
		}

		printf("\nEnter Matrix 2 elements: ");
		printf("\n");

		for (int i=0; i<r2; i++) {
			for (int j=0; j<c2; j++) {
				scanf("%d", &m2[i][j]);
			}
		}

		for (int i=0; i<r2; i++) {
			for (int j=0; j<c2; j++) {
				for (int k=0; k<r2; k++)
				{
					m3[i][j] += m1[i][j] + m2[j][k];
				}
			}
		}

		printf("\nResult Matrix of Mtrix 1 x Matrix 2: ");
		printf("\n");


		for (int i=0; i<r1; i++) {
			for (int j=0; j<c2; j++) {
				printf("%d ", m3[i][j]);
			}
			printf("\n");
		}
	}
	else printf("\nMatrix Multiplication is not possible.");

	printf("\n");
	printf("\n");
	
}

int main() {
	multMat();
	return 0;
}

