#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,d;
	printf("giai phuong tinh a*x^2 + bx + c = 0 \n");
	printf("nhap a,b,c:  ");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a==0) { 
		if (b==0) {
			if (c==0) printf("pt co vo so nghiem");
			else printf("pt vo nghiem");
				 }
		else printf("pt co nghiem don:%5.2lf", -c/b);
		 	}
	else  {
	d = b*b-4*a*c;
	if (d<0) printf("pt vo nghiem");
	if (d==0) printf("pt co nghiem kep:%5.2lf", -b/(2*a));
	if (d>0) printf("pt co 2 nghiem:%5.2lf , %5.2lf", (-b-sqrt(d))/(2*a),(-b+sqrt(d))/(2*a));
	 }	
}
