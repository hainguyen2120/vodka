#include<stdio.h>
int main(){
	int S=0, i=1;
	while (i<=199){
		i%2!=0;
		S=S+i;
		i=i+2;
	}
	printf("S=%d\n",S);
	return 0;
}
