#include <stdio.h>

int func(int k, int j)
{


	j *= 2; // j==2

	if(k==1)
		return j;

	func(k-1, j); //k==7. 2의1승=2니까, 지금 1을 써서 j가 2가 된거..!..


	/* int i=2;

	i *= 2; //i==4

	if(k==0)
		return i;

	func(k-1); //k=7을 다시 매개변수로, 함수 호출
	*/
}


int main(void)
{
	int n;
	
	printf("정수입력 : ");
	scanf("%d", &n);

	printf("2의 8승은 %d\n", func(n, 1));


	return 0;
	

}