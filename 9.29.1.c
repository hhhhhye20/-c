#include <stdio.h>
void Even_num(int arr[], int length); //¦�� ����ϴ� �Լ� ����
void Odd_num( int arr[], int length); //Ȧ�� ����ϴ� �Լ� ����

int main(void)
{
	int arr[10];
	int i;

	printf("�� 10���� ���� �Է�\n");

	for(i=0; i<10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	} // �迭�� ���� 10�� �Է�

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
