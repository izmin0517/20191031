//�ݺ�Ƚ���� �Է¹ް� �Ʒ��� ������ �ݺ��ϸ� �˴ϴ�.
//���ڸ� �ϳ� �Է� �ް� �� ���ڸ� �ݺ� ����� Ƚ���� �Է¹����� �˴ϴ�.
// ex :
// �ݺ� Ƚ�� �Է� : 2
// ���ڿ� Ƚ�� �Է� : A 3
// AAA
// ���ڿ� Ƚ�� �Է� : 8 5
// BBBBB

#include<stdio.h>

int main()
{
	int i,j,tot_rep,rep;
	char ch;
	
	printf("�ݺ�Ƚ�� �Է�:");
	scanf("%d",&tot_rep);
	//rewind(stdin); //�Ǵ� rewind�Լ��� ����Ѵ� 
	i = 0;
	while(i < tot_rep)
	{	
		printf("���ڿ� Ƚ���Է�:");
		//getchar(); //Ȥ�� getchar�� �߰��� �����־� ���۸� ���ֹ��� 
		scanf(" %c %d",&ch,&rep);	//���� �Ŀ� ����(CH)�Լ��� ����� ��� �پ�� �� ����Ͽ����� 
		j = 0;
		while(j < rep)
		{
			printf("%c",ch);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
} 
