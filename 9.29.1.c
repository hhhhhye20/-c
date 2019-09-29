#include <stdio.h>
void Even_num(int arr[], int length); //짝수 출력하는 함수 선언
void Odd_num( int arr[], int length); //홀수 출력하는 함수 선언

int main(void)
{
	int arr[10];
	int i;

	printf("총 10개의 숫자 입력\n");

	for(i=0; i<10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	} // 배열에 숫자 10개 입력

	Odd_num(arr, 10);
	Even_num(arr, 10);

	return 0;

}

void Even_num(int arr[], int length )
{
	int i;

	for(i=0; i<length; i++)
	{
		if(arr[i]%2 == 0 )
			printf("%3d", arr[i]);
	}
	printf("\n");

}

void Odd_num(int arr[], int length)
{
	int i; 
	
	for(i=0; i<length; i++)
	{
		if(arr[i]%2 != 0 )
			printf("%3d", arr[i]);
	}
	printf("\n");

}
