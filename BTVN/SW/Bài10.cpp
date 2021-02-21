#include <stdio.h>
#include <string.h>
void nhapmang(char a[],int n){
 	for (int i=0;i<n;i++){
	scanf("%c",&a[i]);
	}
}
void xuatmang(char a[],int n){
 	for (int i=0;i<n;i++){
	printf("%c",a[i]);
	}
}
void encode(char a[],int n,int k){
	for (int i=0;i<n;i++){
	if((a[i]>64)&&(a[i]<91)) {
	a[i]=a[i]-65;
	a[i]=(a[i]+k)%26;
	a[i]=a[i]+65;	}
	if((a[i]>96)&&(a[i]<123)) {
	a[i]=a[i]-97;
	a[i]=(a[i]+k)%26;
	a[i]=a[i]+97;	}
}}
void decode(char a[],int n,int k){
	for (int i=0;i<n;i++){
	if((a[i]>64)&&(a[i]<91)) {
	a[i]=a[i]-65;
	a[i]=(a[i]+25*k)%26;
	a[i]=a[i]+65;	}
	if((a[i]>96)&&(a[i]<123)) {
	a[i]=a[i]-97;
	a[i]=(a[i]+25*k)%26;
	a[i]=a[i]+97;	}
}}
int main(){
 	char a[100],b[100];
 	int n,k;
 	printf("pass: ");
 	gets(a);
 	n= strlen(a);
 	for (int i=0;i<n;i++){b[i]=a[i];}
 	printf("key: ");
 	scanf("%d",&k);
  	encode(a,n,k);
  	printf("encode: ");
 	xuatmang(a,n);
 	printf("\ndecode: ");
 	decode(b,n,k);
 	xuatmang(b,n);
 }
