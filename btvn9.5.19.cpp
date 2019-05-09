#include<stdio.h>
int main(){
	int arr[10],S=0;
	float tb=0;
	
	for(int i=0;i<10;i++){
		printf("nhap so thu %d: ",i);
		scanf("%d",&arr[i]);
		}
		for(int i=0;i<10;i++){
			S=S+arr[i];
	}
	tb=(float)S/10;
	printf("trung binh cong= %.2lf\n",tb);
	
	return 0;
}

