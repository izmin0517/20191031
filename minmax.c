#include<stdio.h>
#include<limits.h>	//�Լ��� �ּҿ� �ִ�ũ�⸦ �˷��� limit.h����� �� 

int main()
{
	//printf("%d %d \n",INT_MIN,INT_MAX); 
	int min = INT_MAX, max = INT_MIN, number;
	
	printf("������ �Է��ϼ���. ���� ^z�������� �˴ϴ�. :");
	while(scanf("%d",&number) != EOF)
	{
		if(number < min)
		{
			min = number;
		}
		if(number > max)
		{
			max = number;
		}
	}
	if(min == INT_MAX)
	{
		printf("�Է��� ���ڰ������ϴ�");
    }	
	else
	{
		printf("�Է��Ѽ� �� �ּҰ��� %d,�ִ밪�� %d�Դϴ�.",min,max);
	}
	return 0;
}