#include <stdio.h>
#define NROW 3
#define NCOL 3
void TASHIZAN(int x[][NCOL], int y[][NCOL], int z[][NCOL]);
void display(int u[][NCOL]);
void HIKIZAN(int x[][NCOL], int y[][NCOL], int z[][NCOL]);
void KAKEZAN(int x[][NCOL], int y[][NCOL], int z[][NCOL]);




int main(void)
{
	int a[NROW][NCOL] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[NROW][NCOL] = { {11,12,13},{14,15,16},{17,18,19} };
	int c[NROW][NCOL];
	printf("1つ目の行列\n");
	display(a);
	printf("2つ目の行列\n");

	display(b);
	TASHIZAN(a,b, c);
	display(c);

	HIKIZAN(a, b, c);
	display(c);


	KAKEZAN(a, b, c);
	display(c);

	return 0;
}

void TASHIZAN(int x[][NCOL],int y[][NCOL], int z[][NCOL])
{
	int i ,j;

	for (size_t i = 0; i < NROW; i++)
	{
		for (size_t j = 0; j < NCOL; j++)
		{
			z[i][j] = x[i][j] + y[i][j];

		}
	}

	printf("この２つの行列の足し算は\n");

}
void HIKIZAN(int x[][NCOL], int y[][NCOL], int z[][NCOL])
{
	int i, j;

	for (size_t i = 0; i < NROW; i++)
	{
		for (size_t j = 0; j < NCOL; j++)
		{
			z[i][j] = x[i][j] - y[i][j];

		}
	}
	printf("この２つの行列の引き算は\n");


}

void KAKEZAN(int x[][NCOL], int y[][NCOL], int z[][NCOL])
{
	int i, j;

	for (size_t i = 0; i < NROW; i++)
	{
		for (size_t j = 0; j < NCOL; j++)
		{
			z[i][j] = x[i][j] * y[i][j];

		}
	}
	printf("この２つの行列の掛け算は\n");


}




void display(int u[][NCOL])
{
	int i,j;
	for (size_t i = 0; i < NROW; i++)
	{
		for (size_t j = 0; j < NCOL; j++)
		{
			printf("%10d", u[i][j]);
		}
		printf("\n");
	}
}

