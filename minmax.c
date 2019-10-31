#include<stdio.h>
#include<limits.h>	//함수의 최소와 최대크기를 알려면 limit.h를써야 함 

int main()
{
	//printf("%d %d \n",INT_MIN,INT_MAX); 
	int min = INT_MAX, max = INT_MIN, number;
	
	printf("정수를 입력하세요. 끝은 ^z를누르면 됩니다. :");
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
		printf("입력한 숫자가없습니다");
    }	
	else
	{
		printf("입력한수 중 최소값은 %d,최대값은 %d입니다.",min,max);
	}
	return 0;
}
