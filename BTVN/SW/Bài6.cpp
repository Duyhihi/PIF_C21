#include <stdio.h>
#include <string.h>
int main(){
 	char a[100],kt;
 	int m,st,skt,i;
 	printf("nhap chuoi: ");
 	gets(a);
 	m= strlen(a);
 	printf("nhap ki tu: ");
 	scanf("%c",&kt);
 	st=0;
 	skt=0;
 	if (a[0]!=0x20) st=1;
  	for (i=0;i<m;i++){
	if ((a[i]==0x20) && (a[i+1]!=0x20))  st++;
	if (a[i]==kt) skt++;
	 }
	 if (a[m-1]==0x20) st--;
	 printf("so tu: %d \n",st);
	 printf("so ki tu '%c': %d ",kt,skt);
 
}	
