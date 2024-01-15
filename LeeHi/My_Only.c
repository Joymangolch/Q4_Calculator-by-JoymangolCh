#include<stdio.h>
int main()
{
	int a,b,*pointer1,*pointer2,sum;
	printf("Enter the desirable number : ");
	scanf("%d",&a);
    printf("\nEnter the desirable number : ");
    scanf("%d",&b);
	pointer1=&a;
	pointer2=&b;
	sum=*pointer1+*pointer2;
	printf("\nThe the sum of the two pointer is : %d ",sum);
	return 0;

}
