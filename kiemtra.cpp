#include<stdio.h>

int isPrime(int number){
	if (number<2)
	{
		return 0;
	}else if (number==2)
	{
		return 1;
	}else if (number%2==0)
	{
		return 0;
	}else
		for (int i = 3; i < number; i+=2)
	{
		if(number%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	printf("nhap n tu ban phim:\n");
	scanf("%d",&n);
	int isPrime;

	return 0;
}