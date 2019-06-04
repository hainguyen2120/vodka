#include <stdio.h>
int main()
{
	int A[4][4], B[4][4];
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("nhap ma tran A[%d][%d]: \n",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("nhap ma tran B[%d][%d]: \n",i,j);
			scanf("%d",&B[i][j]);
		}
	}		
	int MTT[4][4],MTH[4][4],MTC[4][4];
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			MTT[i][j] = A[i][j] + B[i][j];
			MTH[i][j] = A[i][j] - B[i][j];
			MTC[i][j] = A[i][j] * B[i][j];
		}
	}
	printf("ma tran tong:\n");
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				printf("%5d\n",MTT[i][j]);
			}
			printf("\n");
		}
		printf("ma tran hieu:\n");
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				printf("%5d\n",MTH[i][j]);
			}
			printf("\n");
		}
		printf("ma tran tich:\n");
		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				printf("%5d\n",MTC[i][j]);
			}
			printf("\n");
		}

	return 0;
}

