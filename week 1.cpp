#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	float x1,x2;
	
	printf("masukan nilai a: ");
	scanf("%f", &a);
	printf("masukan nilai b: ");
	scanf("%f", &b);
	printf("masukan nilai c: ");
	scanf("%f", &c);
	x1=(b+sqrt(b*b-4*a*c))/2*a*c;
	x2=(b-sqrt(b*b-4*a*c))/2*a*c;
	printf("x1 = %g\n", x1);
	printf("x2 = %g", x2);
}
