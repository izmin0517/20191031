//��Ŭ���� �˰���
//1.�� �� ��� ū ���� x, ���� ���� y�� �Ѵ�.
//2.y�� 0�̸� ������� x�� ����.
//3.r <- x % y
//4.x <- y
//5.y <- r
//6.2�ܰ�� ���ư���. 

#include<stdio.h>

int main()
{
	int x,y,r,temp;
	
	printf("�ΰ��� ������ �Է��Ͻÿ�.:");
	scanf("%d%d",&x,&y);
	printf("%d�� %d��",x,y);
	
	if(y>x)
	{
		temp = x;
		x = y;
		y = temp;
	}
	while(y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n ",x);
	return 0;	
} 
