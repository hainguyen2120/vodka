#include <stdio.h>

int main(){
	int t;
	printf("nhap vao 1 so: \n");
	scanf("%d",&t);

	switch(t)
	{
		case 1:  printf("thu 2\n");break;
		case 2:  printf("thu 3\n");break;
		case 3:  printf("thu 4\n");break;
		case 5:  printf("thu 5\n");break;
		case 6:  printf("thu 6\n");break;
		case 7:  printf("thu 7\n");break;
		case 8:  printf("chu nhat\n");break;
			default: printf("khong phai ngay trong tuan\n");break;
	}
}