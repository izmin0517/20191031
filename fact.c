#include<stdio.h>

int main()
{
	int fact = 1;
	int i,n;
	
	printf("�����Է�:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fact *= i;
		printf("%d * ",i);

	}
	
	printf("\b\b = %d",fact);
	
	return 0; 
}
