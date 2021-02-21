#include <stdio.h>

int main(){
 	double S,i,f,gt;
 	S=1;
 	gt=1;
 	f=1;
 	for (i=1; i<11;i++){
 		f=f*2;
		 gt=gt*i;
	 S+=f/gt;
	 }	
	 printf("e^2 = %10.11lf", S);
 }
