#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c,D;
	printf ("\n Nhap a:");scanf("%f", &a);
	printf ("\n Nhap b:");scanf("%f", &b);
	printf ("\n Nhap c:");scanf("%f", &c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			printf("\n Phuong trinh vo so nghiem");
			else
			printf("\n Phuong trinh vo nghiem");
		}
		else
		printf("\n Phuong trinh co nghiem duy nhat la x=%0.2f",-c/b);
	}
	else 
	{
	D=b*b-4*a*c;
		if(D<0){
			printf("\n Phuong trinh vo nghiem");
		}
		else if(D==0){
			printf("\n Phuong trinh co nghiem kep x1=x2=%0.2f",-b/(2*a));
		}
		else{
			printf("\n Phuong trinh co 2 nghiem phan biet x1=%0.2f, x2=%0.2f",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
		}
	}
	return 0;	
}

