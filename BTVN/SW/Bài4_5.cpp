#include <stdio.h>
#include <string.h>
int main(){
 	double a[100],max, min, sum, avr;
 	int t,i;
 	printf("so phan tu cua day: ");
 	scanf("%d",&t);
 	printf("nhap day so \n");
 	for (i=0;i<t;i++){
	 scanf("%lf",&a[i]);
	 }
 	max=a[0];
 	min=a[0];
 	sum=0;
 
 	 	for (i=0;i<t;i++){
 	 		sum=sum+a[i];
 	 		if (a[i]>max) max=a[i];
 	 		if (a[i]<min) min=a[i];
 	 		 }
 	avr=sum/t;
 	printf("so lon nhat: %5.2lf\n",max);
 	printf("so be nhat: %5.2lf\n",min);
 	printf("tong: %5.2lf\n",sum);
 	printf("trung binh cong: %5.2lf",avr);
}	
