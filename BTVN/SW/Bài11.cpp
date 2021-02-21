#include <stdio.h>
#include <string.h>
typedef struct Complex{double re; double im; } SP;
SP cong(SP a, SP b){
SP C;
C.re = a.re + b.re;
C.im = a.im + b.im;
return C;
}
SP tru(SP a, SP b){
SP C;
C.re = a.re - b.re;
C.im = a.im - b.im;
return C;
}
SP nhan(SP a, SP b){
SP C;
C.re = a.re*b.re - a.im*b.im;
C.im = a.im*b.re + b.im*a.re;
return C;
}
int main(){
 SP a,b,C,H,T;
 printf("a= ");
 scanf("%lf   %lf  i",&a.re,&a.im);
 printf("b= ");
 scanf("%lf   %lf  i",&b.re,&b.im);
C= cong(a,b);H=tru(a,b);T=nhan(a,b);
 printf("\na+b = %5.2lf + %5.2lfi",C.re,C.im);
  printf("\na-b = %5.2lf + %5.2lfi",H.re,H.im);
   printf("\na*b = %5.2lf + %5.2lfi",T.re,T.im);
 }
