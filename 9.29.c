#include <stdio.h>
int main(void)
{
	//소수 10개를 출력하는 프로그램. 2 3 5 7 11 -- 29
	int count=0; // 10개가 출력되면 멈추기 위해서
	int result=0; // 1과 그 자신으로만 나눠떨어지는지 count하기
	int i, j; // 이중 반복문을 위한 변수의 선언

	for(i=2; count != 10; i++) //2부터 시작해서 소수인지 판별 시작
	{
		for(j=1; j<=i; j++) // 1부터 i까지의 수로 i 나누면서 판별
		{
			if(i%j==0)
				result++; // i가 나눠지는 수가 1과 그 수 자신뿐이라면, 2에서 끝!
		}

		if(result==2) // 2이면은 소수다!
		{
			printf("%d ", i );
			count++;
		}

		result = 0; // 다음 턴에서 i를 i++해서 판별시작해야 하니까 0으로 리셋. 

	}

	printf("\n");

	return 0;


}