#include <stdio.h>
int main()
{
	int arr[5];
	int i;
	int max = 0, min = 100;
	int total = 0;

	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
		total += arr[i];
	}

	
	for(i=0; i<5; i++)
	{
		if( arr[i] > max )
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}

	printf("���� ū ��: %d, ���� ���� ��: %d, �� ��: %d\n", max, min, total);
	
	
	
	return 0;
	



}