#include<stdio.h>
#include<math.h>
int main()
{
      double number,root,result;
	  printf("enter the number=");
	  scanf("%lf",&number);
	  printf("enter the root:");
	  scanf("%lf",&root);
	  result=pow(number,1/root);
	  printf("nth root is %lf\n",root,number,result);	
}
