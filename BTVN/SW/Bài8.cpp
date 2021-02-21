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
void selection_sort(double a[],int n){
 	double max;
	int i,j,m;
	for (i=0;i<n;i++){
		max=a[i];m=i;
		for (j=i+1;j<n;j++){
	 		if (a[j]>max) {max=a[j];m=j;}
		 }
		a[m]=a[i];
		a[i]=max;
		}
}
int main(){
 	double a[100];
 	int n,i,j;
 	printf("so phan tu cua day: ");
 	scanf("%d",&n);
 	printf("nhap day:");
 	nhapmang(a,n); 
 	selection_sort(a,n);
 	xuatmang(a,n);
 }
 
