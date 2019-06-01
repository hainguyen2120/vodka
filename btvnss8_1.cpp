#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr;
	arr = (int *)malloc(10*sizeof(int));

	for (int i = 0; i < 10; ++i)
	{
		printf("Nhap so:\n");
		scanf("%d",arr+i);
	}

	int S = 0;
	for (int i = 0; i < 10; ++i)
	{
		S += *(arr+i);
	}
	float x;
	x = (float)S/10;
	printf("Gia tri trung binh: %f\n",x);

	return 0;
}