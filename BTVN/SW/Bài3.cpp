#include <stdio.h>
#include <math.h>
int main(){
 	int a,i,j;
 	printf("nhap so tien: ");
 	scanf("%d",&a);
 	i=a/10+(a%10)/5 +(a%5)/2 + a%2;
 	printf("so dong tien nho nhat: %d",i);
}
