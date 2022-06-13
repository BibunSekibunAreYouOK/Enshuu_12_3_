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
	printf("1‚Â–Ú‚Ìs—ñ\n");
	display(a);
	printf("2‚Â–Ú‚Ìs—ñ\n");
	display(b);
	printf("\n```[1‚Â–Ú‚Ìs—ñ@(‰‰Zq)@2‚Â–Ú‚Ìs—ñ]	‚Æ‚·‚é```\n\n");

	TASHIZAN(a, b, c);
	display(c);

	HIKIZAN(a, b, c);
	display(c);


	KAKEZAN(a, b, c);
	display(c);

	return 0;
}

void TASHIZAN(int x[][NCOL], int y[][NCOL], int z[][NCOL])
{
	int i, j;

	for (size_t i = 0; i < NROW; i++)
	{
		for (size_t j = 0; j < NCOL; j++)
		{
			z[i][j] = x[i][j] + y[i][j];

		}
	}

	printf("‚±‚Ì‚Q‚Â‚Ìs—ñ‚Ì‘«‚µZ‚Í\n");

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
	printf("‚±‚Ì‚Q‚Â‚Ìs—ñ‚Ìˆø‚«Z‚Í\n");


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
	printf("‚±‚Ì‚Q‚Â‚Ìs—ñ‚ÌŠ|‚¯Z‚Í\n");


}




void display(int u[][NCOL])
{
	int i, j;
	for (size_t i = 0; i < NROW; i++)
	{
		for (size_t j = 0; j < NCOL; j++)
		{
			printf("%10d", u[i][j]);
		}
		printf("\n");
	}
}
