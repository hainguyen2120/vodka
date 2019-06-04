#include <stdio.h>
int main (){
	int n,i;
	printf("nhap n: \n");
	scanf("%d",&n);
	
	if(n<2)
	printf("%d khong phai so nguyen to\n",n);
	else if(n==2)
	printf("%d la so nguyen to\n",n);
	else if(n%2==0)
	printf("%d khong phai so nguyen to\n",n);
	else
	{
		for(int i=3;i<=n;i+=2){
			if(n%i==0)
			break;
		}
		if(i == n)
		printf("%d la so nguyen to\n",n);
		else
		printf("%d khong phai so nguyen to\n",n);
	}
	return 0;
	
}
	
