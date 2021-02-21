#include <stdio.h>

void nhapmang(double a[],int n){
 	for (int i=0;i<n;i++){
	scanf("%lf",&a[i]);
	}
}
void xuatmang(double a[],int n){
 	for (int i=0;i<n;i++){
	printf("%5.2lf ",a[i]);
	}
}
void bubble_sort(double a[],int n){
 	double temp;
	 int i,j;
	 for (i=n-1;i>0;i--){
	 	for (j=0;j<i;j++){
	 		if (a[j]>a[j+1]){
			 temp=a[j];
			 a[j]=a[j+1];
	 		 a[j+1]=temp;
			 }
		 }
		}
}
int main(){
 	double a[100];
 	int n,i,j;
 	printf("so phan tu cua day: ");
 	scanf("%d",&n);
 	printf("nhap day:");
 	nhapmang(a,n); 
 	bubble_sort(a,n);
 	xuatmang(a,n);
 }
 
