#include<stdio.h>

int main()
{
	int i,j,m;
	
	printf("�ﰢ������ �Է� :");
	scanf("%d",&m);
	for(i=m;i>0;i--)
	{
		for(j=i; j>0; j--)
			printf(" ");
		for(j=m-i;j>0;j--)
			printf("*");
		printf("\n");
	}
	return 0;
}
