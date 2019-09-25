#include <stdio.h>
int main(void)
{
	//숫자n입력받음. 다음 공식이 성립하는 k의 최댓값. 2의 k승 <= n

	int n, k=0;
	int i=2;

	printf("상수 n 입력: ");
	scanf("%d", &n);

/*	while(i<=n )
	{
		i *= 2;
		k++;
	}
	*/

	for(i=2; i<=n; i*=2)
	{
		k++;
	}

	printf("공식을 만족하는 k의 값: %d\n", k);

	return 0;
	

}