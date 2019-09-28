#include <stdio.h>
void Even_num(int* ptr1, int length);
void Odd_num(int* ptr2, int length);

int main(void)
{
	int arr[10];
	int i=0;

	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	Odd_num(arr, sizeof(arr)/sizeof(int));
	Even_num(arr, sizeof(arr)/sizeof(int));

	return 0;

}

void Odd_num(int *ptr1, int length)
{
	int i=0;

	for(i=0; i<length; i++)
	{
		if(ptr1[i]%2 != 0)
			printf("%3d", ptr1[i]);
	}
}

void Even_num(int *ptr2, int length)
{
	int i=0;
	for(i=0; i<length; i++)
	{
		if(ptr2[i]%2 == 0 )
			printf("%3d", ptr2[i]);
	}

}