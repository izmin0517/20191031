//반복횟수를 입력받고 아래의 동작을 반복하면 됩니다.
//문자를 하나 입력 받고 그 문자를 반복 출력할 횟수를 입력받으면 됩니다.
// ex :
// 반복 횟수 입력 : 2
// 문자와 횟수 입력 : A 3
// AAA
// 문자와 횟수 입력 : 8 5
// BBBBB

#include<stdio.h>

int main()
{
	int i,j,tot_rep,rep;
	char ch;
	
	printf("반복횟수 입력:");
	scanf("%d",&tot_rep);
	//rewind(stdin); //또는 rewind함수를 사용한다 
	i = 0;
	while(i < tot_rep)
	{	
		printf("문자와 횟수입력:");
		//getchar(); //혹은 getchar을 중간에 끼워넣어 버퍼를 없애버림 
		scanf(" %c %d",&ch,&rep);	//엔터 후에 문자(CH)함수를 사용할 경우 뛰어쓰기 후 사용하여야함 
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
