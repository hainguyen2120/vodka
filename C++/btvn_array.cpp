#include<stdio.h>
int main(){
	int mang[10],max,min;
	
	for(int i=0;i<10;i++)
	{
		printf("nhap so tu ban phim: %d\n",i);
		scanf("%d",&mang[i]);
	}

	
	for(int i=0;i<10;i++)
	{
			if(mang[i]>max){
				max=mang[i];
			}	
	}
	printf("so lon nhat la: %d\n",max);
	
	for(int i=0;i<10;i++)
	{
		if(mang[i]<min){
			min=mang[i];
		}
	}
	printf("so nho nhat la: %d\n",min);
	
	return 0;
}
