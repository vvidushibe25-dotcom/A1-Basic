#include<stdio.h>
#include<math.h>
int main()
{
	float P,R,T,CI,A;
	printf("enter principal:");
	scanf("%f",&P);
	printf("enter rate:");
	scanf("%f",&R);
	printf("enter time:");
	scanf("%f",&T);
	A=P*pow((1+R/100),T);
	CI=A-P;
	printf("compound interest:%f",CI);
}
