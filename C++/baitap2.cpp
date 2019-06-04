#include<stdio.h>
int main(){
	int a;
	printf("nhap a: \n");
	scanf("%d",&a);
	
	for(int i=1; i<=a; i++){
		if(a%i==0)
		printf("uoc cua a: %d\n",i);
	}
}
