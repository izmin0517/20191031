#include<stdio.h>

int main()
{
	int fact = 1;
	int i,n;
	
	printf("숫자입력:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fact *= i;
		printf("%d * ",i);

	}
	
	printf("\b\b = %d",fact);
	
	return 0; 
}
