#include<stdio.h>

int main(void)
{
	int i = 1, hap = 0, num;
	
	printf("���� �Է�:");
	scanf("%d",&num);
	
	while(i <= num)
	{
		hap += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.",num,hap);
	return 0;
}

 