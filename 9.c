#include<stdio.h>
int main()
{
	float P,R,T,result;
	printf("enter principal:");
	scanf("%f",&P);
	printf("enter rate:");
	scanf("%f",&R);
	printf("enter time:");
	scanf("%f",&T);
	result=P*R*T/100;
	printf("simple interest:%f",result);
}
