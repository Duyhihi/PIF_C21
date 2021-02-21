#include <stdio.h>

typedef struct matran{
int mt[100][100];
int hang,cot;
} mtr;

void nhapmang(mtr &a){	
	int j,i;
 	for (i=0;i<a.hang;i++){
 		for (j=0;j<a.cot;j++){
 			
	scanf("%d",&a.mt[i][j]);
	
	}
}
}
void xuatmang(mtr a){
	int i,j;
  	for (i=0;i<a.hang;i++){
 		for (j=0;j<a.cot;j++){
	printf("%5d",a.mt[i][j]);
	} printf("\n"); 
	}
}
mtr cong(mtr a, mtr b){
	mtr X;
	X.hang=a.hang;
	X.cot=b.cot;
  	for (int i=0;i<X.hang;i++){
 		for (int j=0;j<X.cot;j++){
	X.mt[i][j]=a.mt[i][j]+b.mt[i][j];
	}}
	return X;
}
mtr tru(mtr a, mtr b){
	mtr X;
	X.hang=a.hang;
	X.cot=b.cot;
  	for (int i=0;i<X.hang;i++){
 		for (int j=0;j<X.cot;j++){
	X.mt[i][j]=a.mt[i][j]-b.mt[i][j];
	}}
	return X;
}
mtr nhan(mtr a, mtr b){
	mtr X;
	int i,j,k;
	X.hang=a.hang;
	X.cot=b.cot;
  	for (i=0;i<X.hang;i++){
 		for (j=0;j<X.cot;j++){
	X.mt[i][j]=0;
	for(k=0;k<a.cot;k++){
	X.mt[i][j]+=a.mt[i][k]*b.mt[k][j];
	}
	}}
	return X;
}
mtr chuyenvi(mtr a){
	mtr X;
	X.hang=a.cot;
	X.cot=a.hang;
  	for (int i=0;i<X.hang;i++){
 		for (int j=0;j<X.cot;j++){
	X.mt[i][j]=a.mt[j][i];
	}}
	return X;
}
int main(){
 mtr a,b;
 printf("so hang ma tran A:");
 scanf("%d",&a.hang);
 printf("so cot ma tran A:");
 scanf("%d",&a.cot);
 printf("A=\n ");
 nhapmang(a);
 xuatmang(a);
 printf("chuyen vi cua A la:\n");
 xuatmang(chuyenvi(a));
 printf("so hang ma tran B:");
 scanf("%d",&b.hang);
 printf("so cot ma tran B:");
 scanf("%d",&b.cot);
 printf("B=\n ");
 nhapmang(b);
if ((a.hang==b.hang) && (a.cot==b.cot)){
printf("A+B = \n");
xuatmang(cong(a,b));
printf("A-B = \n");
xuatmang(tru(a,b));
}
else if (a.cot==b.hang){
printf("A*B = \n");
xuatmang(nhan(a,b));}
else printf("khong the tinh duoc");
 
 }
