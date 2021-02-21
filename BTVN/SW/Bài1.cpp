#include <stdio.h>


int main(){
	int a,i,j;
	printf("chieu cao: ");
	scanf("%d",&a);
	
	for(i=0; i<a; i++){
		printf("\n       ");
	for(j=0; j<a-i;j++){
		printf(" ");
	}
	for(j=0; j<2*i+1;j++){
		printf("#");
	}
	
	}
}
